#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;


/*
Cho vector V có N phần tử, nhiệm vụ của bạn in ra các phần tử từ chỉ số L tới chỉ số R sau đó in ra các phần tử từ chỉ số R tới chỉ số L bằng cách dùng iterator.

Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector. Dòng 3 là L và R

Constraints

1<=N<=1000. 0<=L<=R

Output Format

Dòng 1 in ra vector từ L tới R, dòng 2 in ra vector từ R tới L.

Sample Input 0

10
8 1 8 3 8 5 3 5 9 7 
3 6

Sample Output 0

3 8 5 3 
3 5 8 3 


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


int main(){
    int m; cin>>m;
    vi vt(m);
    for(int i=0; i<m; i++){
        cin>>vt[i];
    }
    int l,r; cin>>l>>r;
    for(vi::iterator it = vt.begin()+l; it!=vt.begin()+r+1; it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(vi::iterator it = vt.begin()+r; it!=vt.begin()+l-1; it--){
        cout<<(*it)<<" ";
    }


}   