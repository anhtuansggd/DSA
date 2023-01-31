#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
Tính tổng ước của 1 số nguyên dương N.

Input Format

1 số nguyên dương N

Constraints

1≤N≤10^12.

Output Format

Tổng ước số của N

Sample Input 0

100

Sample Output 0

217

Sample Input 1

28

Sample Output 1

56


*/
// 50: 1 2 5 10 25 50
ll pt(ll n){
    ll sum = 0;
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            sum += i;
            if(i != n/i){
                sum += n/i;
            }
        }
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    cout<<pt(n);
    
}    