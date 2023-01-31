#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

Biểu diễn hệ 16 của số nguyên N.

Sample Input 0

995

Sample Output 0

3E3


*/

void dec2hex(ll n){
    if(n < 16){
        if(n < 10){
            cout<<n;
        }else{
            cout<<(char)(55+n);
        }
    }else{
        dec2hex(n/16);
        int r = n%16;
        if(r < 10){
            cout<<r;
        }else{
            cout<<(char)(55+r);
        }

    }
}


int main() {
    ll n; cin>>n;
    dec2hex(n);

    
    return 0;
}