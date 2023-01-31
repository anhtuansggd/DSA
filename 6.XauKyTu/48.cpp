#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Một số nguyên không âm n được gọi là số may mắn nếu tổng các chữ của n bằng 9 hoặc tổng các chữ số của n là số may mắn. Ví dụ các số 9, 108, 279 là các số may mắn, còn các số 19, 289 không phải là số may mắn.

Input Format

Số nguyên dương N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N là số may mắn, ngược lại in ra NO.

Sample Input 0

18

Sample Output 0

YES


*/

bool check(string s){
    ll sum = 0;
    for(int i=0; i<s.size(); i++){
        sum += s[i]-'0';
        sum %= 9;
    }
    if(sum%9==0){return 1;}
    return 0;
}
int main() {
    string s; cin>>s;
    if(check(s)){
        cout<<"YES";
    }else cout<<"NO";

}
