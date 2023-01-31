#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng số nguyên A[] gồm N phần tử, có Q thao tác, mỗi thao tác yêu cầu các bạn tăng tất cả các phần tử từ chỉ số L tới chỉ số R lên K đơn vị. Bạn hãy in ra mảng sau khi thực hiện các thao tác trên.

Input Format

    Dòng 1 là N và Q

    Dòng 2 là N phần tử trong mảng A[]

    Q dòng tiếp theo mỗi dòng là 3 số L, R, K

Constraints

    1<=N<=10^6

    1<=Q<=10^5

    0<=L<=R<=N-1, 0<=A[i],K<=1000

Output Format

In ra mảng sau Q thao tác

Sample Input 0

7 3
8 5 8 9 7 6 9 
0 5 0
0 5 0
1 5 1

Sample Output 0

8 6 9 10 8 7 9 


*/


int main() {
    int n,q; cin>>n>>q;
    int a[n];
    for(int &x:a){cin>>x;}
    int d[n];
    d[0] = a[0];
    for(int i=1; i<n; i++){
        d[i] = a[i] - a[i-1];
    }
    while(q--){
        int l, r, k; cin>>l>>r>>k;
        d[l] += k;
        d[r+1] -= k;
    }
    for(int i=1; i<n; i++){
        d[i] = d[i-1] + d[i];
    }
    for(int i=0; i<n; i++){
        cout<<d[i]<<' ';
    }



    
}
