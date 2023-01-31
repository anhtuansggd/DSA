#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

Tổng các chữ số của N

Sample Input 0

123456789

Sample Output 0

45


*/

ll sum(ll n){
    int k = n%10;
    n /= 10;
    if(n>0 && n<10){
        return n + k;
    }else{
    return sum(n) + k;
    }
    
}




int main() {
    ll n; cin>>n;
    cout<<sum(n);

    
    return 0;
}