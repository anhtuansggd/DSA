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
In ra số lượng chữ số 0 liên tiếp tính từ cuối của N! Ví dụ bạn có N = 10, 10!= 3628800. Như vậy, 10! có 2 chữ số 0 liên tiếp tính từ cuối.

Input Format

Số nguyên dương N

Constraints

1≤N≤10^18

Output Format

In ra số lượng chữ số 0 liên tiếp tính từ cuối của N!. Kết quả lấy dư với 1000000007.

Sample Input 0

10

Sample Output 0

2


*/

//so luong so 0 tinh tu cuoi
// n! chia het cho 10 bao nhieu lan
// n! chia het cho 2,5 bao nhieu lan
// n! chia het cho 5 bao nhieu lan

// VD: n! chia het 2^15 va 5^6
// 2 3 4 5 6 7 8 9 10 12 -> mu cua 5 luon nho hon 2
ll legendre(ll n, ll p){
    ll res = 0;
    // for(ll i=p; i<=n; i*=p){
    //     res += n/i;
    // }
    while(n >= p){ 
        res = (res + (n/p)%Mod)%Mod;
        n /= p; 
    }
    return res;
}
int main(){
    ll n; cin>>n;
    cout<<legendre(n,5);
    
}    