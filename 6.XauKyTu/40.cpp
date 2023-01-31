#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho số nhị phân N, hãy kiểm tra xem N có chia hết cho 5 hay không.

Input Format

Số N ở dạng nhị phân

Constraints

N có không quá 1000 bit.

Output Format

In ra YES nếu N chia hết cho 5, ngược lại in ra NO.

Sample Input 0

1010

Sample Output 0

YES

Sample Input 1

1010

Sample Output 1

YES

Sample Input 2

1010

Sample Output 2

YES


*/

int main() {
    string s; cin>>s;
    ll sum = 0, tmp1 = 1;
    for(int i=0; i<s.size(); i++){
        ll tmp2 = s[s.size()-i-1]-'0';
        sum += (tmp1 * tmp2);
        tmp1 *= 2;
        tmp1 %= 5;
        sum %= 5;
    }
    if(sum%5==0){
        cout<<"YES";
    }else cout<<"NO";
   

    
}
