#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;
int n, k, s, a[100],cnt=0;

/*
Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s? Các tập hợp là hoán vị của nhau chỉ được tính là một. Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Input Format

1 dòng gồm 3 số nguyên n, k, s

Constraints

1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155

Output Format

In ra số lượng các tập hợp thỏa mãn điều kiện đề bài.

Sample Input 0

16 8 91

Sample Output 0

28


*/

int kq(){
    int r = 0;
    for(int i=1; i<=k; i++){
        r+=a[i];
    }
    return r;
}

void Try(int i){
    for(int j=a[i-1]+1; j<=n-k+i; j++){
        a[i] = j;
        if(i==k){
            if(s==kq()){
                cnt++;
            }
        }else{
            Try(i+1);
        }
    }
}
int main() {
    cin>>n>>k>>s;
    Try(1);
    cout<<cnt;
    
}

