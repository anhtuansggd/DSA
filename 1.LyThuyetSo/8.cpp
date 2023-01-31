#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4, 9, 25, 49.

Input Format

Số nguyên dương N

Constraints

1≤N≤10^12

Output Format

Đưa ra kết quả trên một dòng

Sample Input 0

100

Sample Output 0

4 9 25 49


*/

ll prime(ll n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

ll t_prime(ll n){
    ll sqr = sqrt(n);
    if(sqr*sqr != n){
        return 0;
    }
    return prime(sqr);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    for(ll i=0; i<=sqrt(n); i++){
        ll x = i*i;
        if(t_prime(x)){
            cout<<x<<" "; 
        }
    }
}    