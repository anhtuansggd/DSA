#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một số nguyên không âm N, hãy tính tổng các chữ số của N.

Input Format

Số nguyên không âm N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra tổng các chữ số của N.

Sample Input 0

123456789

Sample Output 0

45


*/
int main() {
    string s; cin>>s;
    ll res = 0;
    for(int i=0; i<s.size(); i++){
        res += s[i]-'0';
    }
    cout<<res;
    
}
