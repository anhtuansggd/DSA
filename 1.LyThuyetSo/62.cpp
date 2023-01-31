#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;

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

/*
Tính tổ hợp chập K của N và chia dư kết quả cho (1e9 + 7).

Input Format

2 số N và K

Constraints

0<=K<=N<=1000000;

Output Format

In ra kết quả của bài toán

Sample Input 0

5 2

Sample Output 0

10


*/

int prime[(int)1e6+7];
void sang(){
    for(int i=0; i<=1e6+7; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i=2; i<=sqrt(1e6+7); i++){
        for(int j=i*i; j<=1e6+7; j+=i){
            prime[j] = 0;
        }
    }
}
ll legendre(int n, int p){
    ll res = 0;
    while(n >= p){
        res += n/p;
        n /= p;
    }
    return res;
}

ll powMod(int a, int b){
    ll res = 1;
    while(b){
        if(b%2==1){
            res *= a;
            res %= Mod;
        }
        a = (1ll*a*a)%Mod;
        b /= 2;
    }
    return res;
}

int main(){
    //n!/k!(n-k)!
    sang();
    int n,k; cin>>n>>k;
    ll res = 1;
    for(int i=2;i<=n; i++){
        if(prime[i]){
            ll mu = legendre(n,i) - legendre(k,i) - legendre(n-k, i);
            res *= powMod(i,mu);
            res %= Mod;
        }
    }
    cout<<res;



}    