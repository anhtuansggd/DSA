#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho số N, nhiệm vụ của bạn là tìm bộ số nhỏ nhất khác 0 của N mà là số chính phương. Ví dụ N = 12 thì số đó là 36.

Input Format

Dòng duy nhất chứa chứa số nguyên dương N

Constraints

1<=N<=10^8

Output Format

In ra đáp án của bài toán

Sample Input 0

70

Sample Output 0

4900

Sample Input 1

58

Sample Output 1

3364


*/

// 12 = 2^2*3^1 ma 36 la 2^2*3^2 -> so chinh phuong la so co mu chan

int main() {
    int n; cin>>n;
    ll res = n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n /= i;
            }
            if(cnt%2==1){
                res *= i;
            }
        }
    }
    if(n!=1) res *= n; 
    cout<<res;



    
}