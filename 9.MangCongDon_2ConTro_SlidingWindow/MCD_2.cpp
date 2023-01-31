#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng số nguyên A[] gồm N phần tử, có Q truy vấn, mỗi truy vấn là 2 số L, R bạn hãy tính tổng các số từ chỉ số L tới chỉ số R của mảng.

Input Format

    Dòng 1 là N và Q

    Dòng 2 là N số nguyên

    Q dòng tiếp theo mỗi dòng là 1 truy vấn

Constraints

    1<=N,Q<=10^6

    1<=A[i]<=10^9

    0<=L<=R<=N-1

Output Format

In ra kết quả của mỗi truy vấn trên 1 dòng

Sample Input 0

11 3
6 5 9 7 7 6 7 7 5 9 7 
1 9
1 10
0 8

Sample Output 0

62
69
59


*/

int main() {
    int n,x; cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll F[n];
    F[0] = a[0];
    for(int i=1; i<n; i++){
        F[i] = F[i-1] + a[i];
    }
    while(x--){
        int a,b; cin>>a>>b;
        if(a-1>=0){
            cout<<F[b] - F[a-1]<<endl;
        }else{
            cout<<F[b]<<endl;
        }
    }



    
}
