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
Đếm số lượng ước của n!.

Input Format

Số nguyên dương N

Constraints

1≤n≤10^5

Output Format

Số lượng ước của n giai thừa lấy dư với 1000000007

Sample Input 0

4

Sample Output 0

8


*/

int ngto(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

ll bac(int n, int p){
    ll res = 0;
    while(n>=p){
        res += n/p;
        res %= Mod;
        n/=p;
    }
    return res;
}
int main(){
    int n; cin>>n;
    ll res = 1;
    for(int i=2; i<=n; i++){
        if(ngto(i)){
            ll e = bac(n, i);
            res *= (e+1);
            res %= Mod;
        }
    }
    cout<<res;
}    