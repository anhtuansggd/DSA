#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Yêu cầu tính (1^n + 2^n + 3^n +4^n) % 5, trong đó n là số nguyên lớn.

Input Format

Số nguyên không âm n.

Constraints

n có không quá 1000 chữ số.

Output Format

In ra kết quả của bài toán

Sample Input 0

0

Sample Output 0

4


*/

/*
Dua vao tan cung cac so khi cong lai 
VD:
1^1 + 2^1 + 3^1 + 4^1 = 1+2+3+4 = 10 -> 10%5 = 0
1^2 + 2^2 + 3^2 + 4^2 = 1+4+9+6 = 20 -> 20%5 = 0
1^3 + 2^3 + 3^3 + 4^3 = 1+8+7+4 = 20 -> 20%5 = 0
1^4 + 2^4 + 3^4 + 4^4 = 1+6+1+6 = 14 -> 14%5 = 4
-> Nhu vay pattern la 0,0,0,4 khi chia du cho 4
*/
void soDu(string s){
    int tmp = 0;
    if(s.size()==1){
        tmp = (s[0]-'0')%4;
    }
    tmp = (s[s.size()-2]-'0')*10 + (s[s.size()-1]-'0');
    tmp%=4;
    if(tmp==0){ cout<<4; }
    else cout<<0;
    
}

int main() {
    string s; cin>>s;
    soDu(s);
 
}
