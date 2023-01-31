#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một xâu kí tự, hãy viết hoa và viết thường các kí tự là chữ cái trong xâu, các kí tự không phải là chữ cái thì không thay đổi.

Input Format

Xâu kí tự S.

Constraints

1≤len(S)≤1000.

Output Format

Dòng đầu tiên in ra xâu sau khi thay đổi mọi kí tự thường trong xâu thành ký tự hoa. Dòng thứ 2 in ra xâu sau khi thay đổi mọi kí tự hoa trong xâu thành kí tự thường.

Sample Input 0

abcd ABCD

Sample Output 0

ABCD ABCD
abcd abcd


*/
int main() {
    string s; getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(islower(s[i])){
            cout<<(char)toupper(s[i]);
        }else{
            cout<<s[i];
        }
    }
    cout<<endl;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])){
            cout<<(char)tolower(s[i]);
        }else{
            cout<<s[i];
        }
    }
}
    