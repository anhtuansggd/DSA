#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy liệt kê các từ khác nhau trong xâu S, đầu tiên hãy liệt kê các từ khác nhau theo thứ tự từ điển tăng dần, sau đó liệt kê các từ theo thứ tự xuất hiện trong xâu.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

Dòng đầu tiên in ra các trong xâu theo thứ tự từ điển. Dòng thứ hai in ra các từ theo thứ tự xuất hiện trong xâu. Chú ý không in dấu cách thừa sau từ cuối cùng của từng dòng.

Sample Input 0

python java php php java python

Sample Output 0

java php python
python java php


*/
int main() {
    string s1;
    set<string> st;
    vector<string> vt;
    while(cin>>s1){
        if(st.count(s1)==0){
            vt.push_back(s1);
        }
        st.insert(s1);
    }
    for(string s:st){cout<<s<<' ';}
    cout<<endl;
    for(string s:vt){cout<<s<<' ';}
}
    