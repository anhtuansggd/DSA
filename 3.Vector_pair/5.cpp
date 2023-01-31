#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

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
Cho vector V có N phần tử, nhiệm vụ của bạn là lật ngược vector V và in ra. Sau khi lật ngược toàn bộ vector, bạn tiếp tục lật ngược các phần tử từ chỉ số L tới chỉ số R sau đó in ra vector. Để lật ngược vector V :

reverse(V.begin(), V.end())

, để lật ngược vector V từ chỉ số L tới chỉ số R :

reverse(V.begin() + L, V.begin() + R + 1);

Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector. Dòng 3 là L và R

Constraints

1<=N<=1000. 0<=L<=R

Output Format

Dòng 1 in ra vector sau lần lật 1, dòng 2 in ra vector sau lận lật 2.

Sample Input 0

13
5 3 4 1 6 3 0 3 1 4 8 4 1 
3 3

Sample Output 0

1 4 8 4 1 3 0 3 6 1 4 3 5 
1 4 8 4 1 3 0 3 6 1 4 3 5 

Sample Input 1

10
7 8 1 7 1 9 1 4 0 9 
3 5

Sample Output 1

9 0 4 1 9 1 7 1 8 7 
9 0 4 1 9 1 7 1 8 7 


*/
int main(){
    int n; cin>>n;
    vi vt(n);
    for(int i=0; i<n; i++){
        cin>>vt[i];
    }
    reverse(vt.begin(), vt.end());
    for(int x : vt){cout<<x<<" ";}
    cout<<endl;
    int l,r; cin>>l>>r;
    reverse(vt.begin()+l, vt.begin()+r+1);
    for(int x : vt){cout<<x<<" ";}

}   