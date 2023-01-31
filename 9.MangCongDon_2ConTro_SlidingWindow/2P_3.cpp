#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là hãy đếm xem trong 2 mảng tồn tại bao nhiêu cặp i, j sao cho A[i] = B[j]

Input Format

    Dòng đầu tiên là N và M

    Dòng 2 là N số trong mảng A[]

    Dòng 3 là M số trong mảng B[]

Constraints

    1<=N,M<=10^7

    1<=A[i],B[i]<= 10^9

Output Format

In ra đáp án của bài toán

Sample Input 0

6 7
3 3 3 4 7 9 
2 3 3 5 6 9 10 

Sample Output 0

7


*/
int main() {
    int n,m; cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int i=0,j=0;
    ll ans = 0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            int dem1=0;
            while(a[i]==b[j]){
                dem1++; i++;
            }
            int dem2=0;
            while(a[i-1]==b[j]){
                dem2++; j++;
            }
            ans += 1ll*dem1*dem2;
        }else if(a[i] < b[j]){
            i++; 
        }else j++;
    }
    cout<<ans;

    
}
