#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho số nguyên không âm N, nhiệm vụ của bạn là xác định chữ số khác 0 đầu tiên tính từ cuối của N!, ví dụ N = 10 thì N! = 3628800 thì chữ số đầu tiên khác 0 tính từ cuối của 10! là 8

Input Format

Dòng duy nhất chứa số nguyên không âm N

Constraints

0<=N<=10^5

Output Format

In ra đáp án của bài toán

Sample Input 0

2

Sample Output 0

2

Sample Input 1

10

Sample Output 1

8


*/

int dem(int n, int p){
    int res = 0;
    while(n>=p){
        res += n/p;
        n /= p;
    }
    return res;
}

int main() {
    int n; cin>>n;
    //bac cua 5 se luon nho hon bac cua 2
    int dem5 = dem(n,5), cnt2=0, cnt5=0;
    int last_digit = 1;
    //chi can luu chu so cuoi cung, VD: 58*47 = 2726, 8*7 = 46 -> Chu so cuoi cung la 6
    for(int i=2; i<=n; i++){
        int j = i;
        //loai bo phan 2*5 tao nen 10
        while(cnt2<dem5 && j%2==0){
            cnt2++;
            j /= 2;
        }
        while(cnt5<dem5 && j%5==0){
            cnt5++;
            j /= 5;
        }

        last_digit *= j;
        last_digit %= 10;
    }
    cout<<last_digit;
    
}