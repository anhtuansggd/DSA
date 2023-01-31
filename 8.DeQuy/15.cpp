#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.

Input Format

Số nguyên không âm N

Constraints

0≤n≤10^18

Output Format

In ra chữ số đầu tiên của N.

Sample Input 0

56721

Sample Output 0

5


*/

ll firstNum(ll n){
    if(n>0 && n<10){
        return n;
    }else{
        return firstNum(n/=10);
    }
    
}




int main() {
    ll n; cin>>n;
    cout<<firstNum(n);

    
    return 0;
}