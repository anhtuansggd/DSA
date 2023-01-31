#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự, hay đếm số lượng kí tự là chữ cái, chữ số và kí tự đặc biệt(Các kí tự không phải là chữ cái và chữ số).

Input Format

Xâu kí tự S.

Constraints

1≤len(S)≤1000.

Output Format

In ra số lượng chữ cái, chữ số, và kì tự đặc biệt xuất hiện trong xâu

Sample Input 0

abcd123 $%^ a

Sample Output 0

5 3 5


*/

int main() {
    string s; getline(cin,s);
    int c1=0,c2=0,c3=0;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            c1++;
        }else if(isdigit(s[i])){
            c2++;
        }else{
            c3++;
        }
    }
    cout<<c1<<' '<<c2<<' '<<c3;
}
    