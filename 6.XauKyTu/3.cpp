#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một xâu kí tự, hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

Input Format

Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

Constraints

1≤len(S)≤100000.

Output Format

Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(chú ý mỗi kí tự chỉ in 1 lần)

Sample Input 0

abcdabcdA

Sample Output 0

A 1
a 2
b 2
c 2
d 2

a 2
b 2
c 2
d 2
A 1


*/
int main() {
    string s; cin>>s;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(pair<char, int> pr:mp){cout<<pr.first<<' '<<pr.second<<endl;}
    cout<<endl;
    for(int i=0; i<s.size(); i++){
        if(mp[s[i]]!=0){
            cout<<s[i]<<' '<<mp[s[i]]<<endl;
            mp[s[i]] = 0;
        }
    }
}
    