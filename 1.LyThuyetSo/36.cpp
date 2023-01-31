#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

/*
In ra tam giác pascal với chiều cao là n. Nếu các giá trị của tam giác pascal quá lớn, in ra giá trị trong tam giác này lấy dư với 1e9+7

Input Format

Số nguyên dương n

Constraints

1≤n≤10^2

Output Format

Tam giác pascal

Sample Input 0

6

Sample Output 0

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 


*/

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll  long long 
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define FORR(i, a, b) for(int i=a; i>b; i--)
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll> 

void Pascal(int n){
    ll Pc[n][n];
    for(int i=0; i<n; i++){
        for(ll j=0; j<=i; j++){
            if(j==0 || j==i){
                Pc[i][j] = 1;
            }else{
                Pc[i][j] = (Pc[i-1][j-1]%Mod + Pc[i-1][j]%Mod)%Mod;
            }
            cout<<Pc[i][j]<<" ";
        }
        cout<<endl;
    }


}
int main(){
    int n; cin>>n;
    Pascal(n);
}    