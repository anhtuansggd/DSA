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
Có n quả táo và m cái hộp, 28Tech muốn tìm số cách chia n quả táo này vào m hộp sao cho hộp nào cũng có ít nhất 1 quả táo. Bạn hãy giúp anh ta nhé.

Input Format

2 số nguyên n, m

Constraints

1 ≤ m ≤ n ≤ 1000

Output Format

Kết quả của bài toán lấy dư với 1000000007 (1e9 + 7)

Sample Input 0

6 3

Sample Output 0

10

Explanation 0

Có 10 cách cách chia như sau (2, 2, 2) (1, 1, 4) (1, 4, 1) (4, 1, 1) (1, 2, 3) (1, 3, 2) (2, 1, 3) (2, 3, 1) (3, 1, 2) (3, 2, 1)
*/

ll c[1005][1005];
void to_hop(int n, int k){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                c[i][j] = 1;
            }else
                c[i][j] = ((c[i-1][j-1]%Mod) + (c[i-1][j]%Mod)) % Mod;
        }
    }
}


int main(){
    int n,m; cin>>n>>m;
    to_hop(n,m);
    cout<<c[n-1][m-1];

}    