#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;

/*
Tính a^b%1000000007 với a,b nguyên không âm.

Input Format

2 số nguyên không âm a và b

Constraints

1≤a,b≤10^12

Output Format

Kết quả của bài toán

Sample Input 0

2 10

Sample Output 0

1024


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

ll binPow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b%2==1){
            res = ( res%Mod * a%Mod ) %Mod;
        }
        a *= a;
        a %= Mod;
        b/=2;
    }
    return res;
}
int main(){
    ll a, b; cin>>a>>b;
    cout<<binPow(a%Mod,b);
}    