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
Có n đứa trẻ và m quả táo, 28Tech muốn đếm số cách chia táo cho n đứa trẻ, nhưng trong trường hợp này không nhất thiết đứa trẻ nào cũng phải có táo. Ví dụ, có 3 đứa trẻ và 2 quả táo, có những cách chia như sau (0, 0, 2), (0, 2, 0), (2, 0, 0), (1, 1, 0), (0, 1, 1), (1, 0 ,1). Bạn hãy giúp anh ấy nhé ! Ở đây n với m, mình cho <= 25, vậy bạn thử nghĩ xem trong trường hợp n,m <= 1000, hoặc n,m <= 10^6, và yêu cầu in ra kết quả của bài toán chia dư với 10^9 + 7 thì hướng giải như thế nào?

Input Format

2 số n và m

Constraints

1 ≤ m, n ≤ 25

Output Format

Đáp án của bài toán

Sample Input 0

3 2

Sample Output 0

6


*/

ll to_hop(int n ,int m){
    ll res = 1;
    for(int i=1; i<=m; i++){
        res *= (n-i+1);
        res /= i;
    }
    return res;
}


int main(){
    int n,m; cin>>m>>n;
    cout<<to_hop(n + m-1,m-1);

}    