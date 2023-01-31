#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Ở bài toán này, bạn cần tìm kết quả của phép toán a^(b^c) % (1e9+7). Hãy cẩn thận vì b^c có thể rất lớn ! Chú ý 0^0=1

Input Format

Dòng đầu tiên là số lượng bộ test Mỗi bộ test gồm 3 số a, b, c

Constraints

1≤n≤10^5; 0≤a,b,c≤10^9

Output Format

In ra kết quả mỗi test trên 1 dòng

Sample Input 0

1
2 3 2

Sample Output 0

512

Explanation 0

2^(3^2) = 2^9 = 512 % (1e9 + 7) = 512
*/

/*
https://stackoverflow.com/questions/62931208/what-is-the-explanation-for-being-able-to-simplify-abc-mod-prim-such-that
*/

ll powMod(ll a, ll b, ll m){
    ll res = 1;
    while(b){
        if(b%2==1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}


int main(){
    int n,a,b,c; cin>>n;
    while(n--){
        cin>>a>>b>>c;
        ll bc = powMod(b,c, Mod-1);
        ll abc = powMod(a,bc, Mod);
        cout<<abc<<endl;
    }

    
    return 0;
}