#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không. Nếu đúng in ra 1, sai in ra 0.

Input Format

Số nguyên n

Constraints

0≤n≤10^18

Output Format

In ra 1 nếu n là số lộc phát, ngược lại in 0

Sample Input 0

60806

Sample Output 0

1


*/
bool check(ll n){
    while(n){
        if(n%10!=0 && n%10!=6 && n%10!=8){
            return false;
        }
        n/=10;
    }
    return true;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    cout<<check(n);
}    