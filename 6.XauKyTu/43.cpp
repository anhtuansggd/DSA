#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 số N và M, hãy tìm ước chung lớn nhất của N và M. Chú ý ở đây N là một số nguyên lớn và M là một số nguyên 64 bit. Gợi ý : Dùng thuật toán Euclid.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là số nguyên dương M.

Constraints

N có không quá 1000 chữ số; M là 1 số nguyên 64 bit.

Output Format

In ra UCLN của N và M

Sample Input 0

100
20

Sample Output 0

20


*/

ll gcd(ll a, ll b){
    if(b==0){return a;}
    else{return gcd(b, a%b);}
}

ll mod(string a, ll b){
    ll res = 0;
    for(int i=0; i<a.size(); i++){
        res = (res*10 + (a[i]-'0'))%b;
    }
    return res;
}
int main() {
    string n; ll m; cin>>n>>m;
    cout<<gcd(m, mod(n, m));
       
   

    
}
