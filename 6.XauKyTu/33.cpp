#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Một số được coi là số đẹp nếu nó là số thuận nghịch và chứa ít nhất 1 chữ số 6. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

Input Format

Số nguyên dương N

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N là số đẹp, ngược lại in ra NO.

Sample Input 0

6433987866217635596629171229463963223693649221719266955367126687893346

Sample Output 0

YES


*/
bool tn(string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    return tmp == s; 
}

int main() {
    string s; cin>>s;
    bool fl = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]-'0' == 6){
            fl = 1; break;
        }
    }
    if(fl && tn(s)){
        cout<<"YES";
    }else cout<<"NO";

    
}
