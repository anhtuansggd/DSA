#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho n, in ra chữ số cuối cùng của 1378^n.

Input Format

Số nguyên không âm n

Constraints

0≤n≤10^18

Output Format

Chữ số cuối cung của 1378^n

Sample Input 0

2

Sample Output 0

4

Explanation 0

(1378^2)%10 = 1898884 % 10 = 4s
*/


//See the pattern 
// 1378^1 =8, 1378^2=4, 1378^3=2, 1378^4=6
// 1378^5 =8, 1378^6=4, 1378^7=2, 1378^8=6

int main() {
    string s = "8426";
    ll n; cin>>n;
    if(n==0){
        cout<<1;
    }else{
        cout<<s[(n-1)%4];
    }

} 