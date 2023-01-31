#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4.

Input Format

Số nguyên dương N

Constraints

1≤N≤10^12

Output Format

Đưa ra kết quả mỗi theo từng dòng.

Sample Input 0

838000000000

Sample Output 0

72397


*/

bool prime(ll n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return n>1;
}

bool t_prime(ll n){
    ll sqr = sqrt(n);
    if(sqr*sqr != n){
        return false;
    }
    return prime(sqr);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        ll x = 1ll*i*i;
        if(t_prime(x)){
            cnt++;
        }
    }
    cout<<cnt;
    
}    