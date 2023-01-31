#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm tổng các số xuất hiện trong xâu. Ví dụ xâu kí tự "abcd123aad22a05" có tổng các số trong xâu là 123 + 22 + 5 = 150. Trong trường hợp các số bắt đầu bằng số 0 thì ta loại bỏ các số đó, dữ liệu đảm bảo tổng các số xuất hiện trong xâu không vượt quá 10^18.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra tổng các số trong xâu.

Sample Input 0

abcd123aad22a05

Sample Output 0

150


*/
int main() {
    string s; cin>>s;
    ll res = 0;
    for(int i=0; i<s.size(); i++){
        string tmp = "";
        if(i<s.size() && isdigit(s[i])){
            while(isdigit(s[i]) ){
                tmp += s[i];
                i++;
            }
        }
        if(tmp!=""){
            res += stoll(tmp);
        }
    }
    cout<<res;
    
    


}
