#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, đầu tiên hãy sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần, sau đó sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

Dòng đầu tiên in ra các từ trong xâu theo thứ tự từ điển tăng dần. Dòng thứ 2 in ra các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ in ra trước. Các từ được in cách nhau một dấu cách.

Sample Input 0

hoc lap trinh php

Sample Output 0

hoc lap php trinh
hoc lap php trinh


*/

bool cmp(string a, string b){
    if(a.size() == b.size()){
        return a < b;
    }else{
        return a.size() < b.size();
    }
}
int main() {
    string s;
    vector<string> vt;
    while(cin>>s){
        vt.push_back(s);
    }
    sort(vt.begin(), vt.end());
    for(string s:vt){cout<<s<<' ';}
    cout<<endl;
    sort(vt.begin(), vt.end(), cmp);
    for(string s:vt){cout<<s<<' ';}
    



    

}
    