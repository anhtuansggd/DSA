#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;


/*
Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên

Input Format

2 số nguyên a, b

Constraints

1≤a,b≤10^12

Output Format

Ước chung lớn nhất và bội chung nhỏ nhất, dữ liệu đảm bảo BCNN của 2 số không vượt quá số int 64bit

Sample Input 0

20 50

Sample Output 0

10 100


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

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}
int main(){
    ll a, b; cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b);    
}    