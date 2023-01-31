#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Đếm số lượng các số chính phương trong đoạn từ a tới b

Input Format

2 số nguyên dương a, b

Constraints

1≤a≤b≤10^18

Output Format

Số lượng số chính phương trong đoạn [a, b]

Sample Input 0

1 1000000000

Sample Output 0

31622


*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b; cin>>a>>b;
    ll tmp1,tmp2;
    tmp1 = sqrt(a);
    tmp2 = sqrt(b);
    ll cnt = 0;
    for(ll i=tmp1; i<=tmp2; i++){
        ll tmp3 = i*i;
        if(tmp3>=a && tmp3<=b){
            cnt++;
        }
    }
    cout<<cnt;
    
}    