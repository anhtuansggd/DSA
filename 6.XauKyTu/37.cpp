#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Kiểm tra xem một số nguyên không âm N có chia hết cho 15 hay không? Số chia hết cho 15 nếu nó chia hết cho cả 3 và 5.

Input Format

Số nguyên không âm N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N chia hết cho 15, ngược lại in ra NO.

Sample Input 0

150

Sample Output 0

YES





A number is divisible by 15 if it is divisible by 5 
(if the last digit is 5 or 0), 
and it is divisible by 3 
(if sum of digits is divisible by 3).
*/

bool check(string s){
    if(s[s.size()-1]!='0' && s[s.size()-1]!='5'){ return 0;}
    ll sum = 0;
    for(int i=0; i<s.size(); i++){
        sum += s[i]-'0';
        sum %= 3;
    }
    if(sum%3==0){return 1;}
    return 0;
}
int main() {
    string s; cin>>s;
    if(check(s)){
        cout<<"YES"; return 0;
    }else cout<<"NO";
       
   

    
}
