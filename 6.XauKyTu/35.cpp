#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Kiểm tra một số nguyên N có phải là số chia hết cho 6 hay không? Số chia hết cho 6 nếu nó chia hết cho cả 2 và 3.

Input Format

Số nguyên dương N.

Constraints

N có không quá 1000 chữ số.

Output Format

In YES nếu N là số chia hết cho 6, ngược lại in NO.

Sample Input 0

360

Sample Output 0

YES


*/

/*
A number is divisible by 6 it's divisible by 2 and 3. 
a)  A number is divisible by 2 if its last digit is divisible by 2.
b)  A number is divisible by 3 if sum of digits is divisible by 3.
*/

bool check(string s){
    if(s[s.size()-1]%2!=0){
        return 0;
    }
    ll sum = 0;
    for(int i=0; i<s.size(); i++){
        sum += s[i] - '0';
    }
    if(sum%3!=0){
        return 0;
    }
    return 1;
}
int main() {
    string s; cin>>s;
    if(check(s)){
        cout<<"YES"; return 0;
    }
    cout<<"NO";
   

    
}
