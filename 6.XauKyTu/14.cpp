#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách. Hãy tìm từ có số lần xuất hiện nhiều nhất và ít nhất trong xâu, nếu có nhiều từ có cùng số lần xuất hiện nhiều nhất hoặc ít nhất thì chọn từ có thứ tự từ điển lớn nhất làm kết quả.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

Dòng đầu tiên in ra từ có số lần xuất hiện nhiều nhất. Dòng thứ 2 in ra từ có số lần xuất hiện ít nhất.

Sample Input 0

aa bb cc aa bb aa aa cc

Sample Output 0

aa 4
cc 2


*/

int main() {
    string s;
    vector<string> vt; 
    while(cin>>s){
        vt.push_back(s);
    }
    int mx = INT_MIN, mn = INT_MAX;
    map<string, int> mp;
    for(int i=0; i<vt.size(); i++){
        mp[vt[i]]++;
    }
    for(int i=0; i<vt.size(); i++){
        if(mp[vt[i]]>mx){
            mx = mp[vt[i]];
        }
        if(mp[vt[i]]<mn){
            mn = mp[vt[i]];
        }
    }
    for(auto it=mp.rbegin(); it!=mp.rend(); it++){
        if((*it).second==mx){
            cout<<(*it).first<<' '<<(*it).second;
            break;
        }
    }
    cout<<endl;
    for(auto it=mp.rbegin(); it!=mp.rend(); it++){
        if((*it).second==mn){
            cout<<(*it).first<<' '<<(*it).second;
            break;
        }
    }

    



    

}
    