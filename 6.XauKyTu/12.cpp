#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy sắp xếp các từ thuận nghịch khác nhau trong xâu theo thứ tự từ chiều dài tăng dần, nếu 2 từ thuận nghịch có cùng chiều dài thì từ nào xuất hiện trước sẽ được in ra trước.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra các từ theo thứ tự sắp xếp yêu cầu, các từ được in cách nhau một dấu cách.

Sample Input 0

php aba aaaa nguyen huu hoc pop

Sample Output 0

php aba pop aaaa


*/

bool tn(string n){
    string res = "";
    for(int i=n.size()-1; i>=0; i--){
        res += n[i];
    }
    return res == n;
}

bool cmp(string a, string b){
    return a.size() < b.size();

}
int main() {
    string s;
    vector<string> vt;
    set<string> st;
    while(cin>>s){
        if(st.count(s) == 0 && tn(s)){
            vt.push_back(s);
        }
        st.insert(s);
    }
    stable_sort(vt.begin(), vt.end(),cmp);
    for(string s:vt){cout<<s<<' ';}
    



    

}
    