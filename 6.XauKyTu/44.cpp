#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Cho 2 số N và M, hãy tính N^M%(10^9 + 7). Trong đó N là một số nguyên lớn, M là một số nguyên 64 bit. Gợi ý : Để làm được bài này các bạn phải sử dụng lũy thừa nhị phân để tránh Time Limit.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

Constraints

N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

Output Format

In ra kết quả của bài toán

Sample Input 0

2
10

Sample Output 0

1024


*/

ll mod(string a, ll b){
    ll res = 0;
    for(int i=0; i<a.size(); i++){
        res = (res*10 + (a[i]-'0'))%b;
    }
    return res;
}

ll powMod(ll a, ll b){
    ll res = 1;
    while(b){
        if(b%2){
            res *= a; res %= Mod;
        }
        a *= a;
        a %= Mod;
        b /= 2;
    }
    return res;
}
int main() {
    string n; ll m; cin>>n>>m;
    cout<<powMod(mod(n,Mod), m);
       
}
