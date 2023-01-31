#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu ký tự S chỉ bao gồm các chữ cái, hãy kiểm tra xem xâu nhập vào có phải là xâu đối xứng hay không?

Input Format

Dòng duy nhất là xâu S

Constraints

1≤len(S)≤100000;

Output Format

In ra YES nếu S đối xứng, ngược lại in NO.

Sample Input 0

cBGkXXqKWqqWKqXXkGBc

Sample Output 0

YES


*/

bool check(string s){
    string res = "";
    for(int i=s.size()-1; i>=0; i--){
        res += s[i];
    }
    return res == s;
}

int main() {
    string s; cin>>s;
    if(check(s)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    

}
    