#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng số nguyên A[] gồm N phần tử, mảng cộng dồn của A[] là mảng F[] với tính chất F[i] lưu tổng các phần tử từ chỉ số 0 tới chỉ số i của mảng A[]. Bạn hãy xây dựng mảng cộng dồn F[]

Input Format

    Dòng 1 là N

    Dòng 2 là N số nguyên

Constraints

    1<=N<=10^6

    1<=A[i]<=10^9

Output Format

In ra mảng cộng dồn

Sample Input 0

6
8 7 6 5 6 6 

Sample Output 0

8 15 21 26 32 38 


*/

int main() {
    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ll F[n+1];
    for(int i=1; i<=n; i++){
        if(i==1){
            F[i] = a[i];
        }else F[i] = F[i-1] + a[i];
    }
    for(int i=1; i<=n; i++){
        cout<<F[i]<<' ';
    }


    
}
