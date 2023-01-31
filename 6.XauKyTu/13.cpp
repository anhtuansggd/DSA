#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm xem mỗi từ trong xâu xuất hiện bao nhiêu lần, đầu tiên hãy liệt kê các từ trong xâu kèm theo tần suất của mỗi từ theo thứ tự từ điển, sau đó liệt kê các từ trong xâu theo thứ tự xuất hiện.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

Đầu tiên in ra các từ trong xâu và tần suất của nó theo thứ tự từ điển. Sau đó bỏ trống 1 dòng và in ra các từ trong xâu và tần suất của nó theo thứ tự xuất hiện trong xâu.

Sample Input 0

bb aa bb cc aa bb cc

Sample Output 0

aa 2
bb 3
cc 2

bb 3
aa 2
cc 2


*/

int main() {
    string s,tmp; getline(cin,s);
    stringstream ss(s);
    map<string, int> mp; vector<string> vt;
    while(ss>>tmp){
        if(mp[tmp]==0){
            vt.push_back(tmp);
        }
        mp[tmp]++;
    }
    for(auto it:mp){cout<<it.first<<' '<<it.second<<endl;}
    cout<<endl;
    for(string s:vt){cout<<s<<' '<<mp[s]<<endl;}
}
    