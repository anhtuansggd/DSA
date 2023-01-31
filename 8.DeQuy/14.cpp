#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

using ll = long long;

/*
Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

Số lượng chữ số của N.

Sample Input 0

123452

Sample Output 0

6


*/

int tongChuSo(ll n){
    if(n<10){
        return 1;
    }else{
        return 1 + tongChuSo(n /= 10);
    }
}

int main() {
    ll n; cin>>n;
    cout<<tongChuSo(n);

    
    return 0;
}