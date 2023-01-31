#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 xâu kí tự S và T. Hãy liệt kê các từ xuất hiện ở xâu S và không xuất hiện ở xâu T mà không phân biệt hoa thường, mỗi từ được liệt kê một lần theo thứ tự từ điển tăng dần.

Input Format

Dòng đầu tiên chứa xâu S. Dòng thứ hai chứa xâu T.

Constraints

1≤len(S)≤10000; 1≤len(T)≤10000; Xâu S và T chỉ bao gồm chữ cái và dấu cách.

Output Format

In ra các từ theo thứ tự từ điển, các từ cách nhau một dấu cách và in theo thứ tự từ điển tăng dần.

Sample Input 0

aa AA abc abcd zzaA
ABc ABCd uuzka aka opl

Sample Output 0

aa zzaa


*/

int main() {
    string s1,s2,tmp; getline(cin,s1); getline(cin,s2);
    stringstream st1(s1), st2(s2);
    set<string> s,res;
    while(st2>>tmp){
        for(char &c:tmp){ c = tolower(c); }
        s.insert(tmp);
    }
    while(st1>>tmp){
        for(char &c:tmp){ c = tolower(c); }
        if(s.count(tmp)==0){
            res.insert(tmp);
        }
    }
    for(string s: res){cout<<s<<' ';}
    

    


}
