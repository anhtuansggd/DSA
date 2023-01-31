#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử, mảng B gồm M phần tử. Nhiệm vụ của bạn là xác định xem B có phải là một mảng con (không cần liên tiếp nhưng cần giữ đúng thứ tự các phần tử) của mảng A hay không. Ví dụ mảng A[] = {1, 1, 2, 8, 9, 3, 4}, B[] = {1, 2, 9, 4} là một mảng con của mảng A

Input Format

Dòng đầu tiên gồm N và M; Dòng thứ 2 gồm N số A[i]; Dòng thứ 3 gồm M số B[i];

Constraints

1<=N,M<=10^6; 1<=A[i],B[i]<=10^6;

Output Format

In ra YES nếu B là mảng con của A, ngược lại in NO.

Sample Input 0

16 2
3 6 10 10 10 2 8 4 2 1 9 4 2 1 6 3 
2 3 

Sample Output 0

YES


*/

int main() {
    int n,m; cin>>n>>m;
    int a[n],b[m];
    for(int &x:a){cin>>x;}
    for(int &x:b){cin>>x;}
    int indx=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[indx]){
            ++indx;
        }
        if(indx==m){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
    