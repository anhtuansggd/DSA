#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Đếm số lượng ước của 1 số nguyên dương N

Input Format

Số nguyên dương N

Constraints

1≤N≤10^14

Output Format

Số lượng ước của số nguyên dương N.

Sample Input 0

100

Sample Output 0

9

Sample Input 1

28

Sample Output 1

6


*/
// 50: 1 2 5 10 25 50
int pt(ll n){
    int cnt = 0;
    for(int i=1; i<= sqrt(n); i++){
        if(n%i==0){
            cnt++;
            if(i != n/i){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    cout<<pt(n);
    
}    