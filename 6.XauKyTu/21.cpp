#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 xâu kí tự S và T. Hãy liệt kê các từ xuất hiện ở cả 2 xâu mà không phân biệt hoa thường, mỗi từ được liệt kê một lần theo thứ tự từ điển tăng dần.

Input Format

Dòng đầu tiên chứa xâu S. Dòng thứ hai chứa xâu T.

Constraints

1≤len(S)≤10000; 1≤len(T)≤10000; Xâu S và T chỉ bao gồm chữ cái và dấu cách.

Output Format

In ra các từ xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần, mỗi từ được liệt kê 1 lần và in ra ở dạng chữ in thường.

Sample Input 0

abc abc abcd abcd AB
abC CD ZAH abd ABcD

Sample Output 0

abc abcd


*/

int main() {
    set<string> st,res;
    string s1,s2,tmp; getline(cin,s1); getline(cin,s2);
    stringstream st1(s1), st2(s2);
    while(st1>>tmp){
        for(char &c:tmp){ c = tolower(c); }
        st.insert(tmp);
    }
    while(st2>>tmp){
        for(char &c:tmp){ c = tolower(c); }
        if(st.count(tmp)){
            res.insert(tmp);
        }
    }
    for(string s: res){cout<<s<<' ';}
    

    


}
