#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho một xâu kí tự S chỉ bao gồm các kí tự là chữ cái và dấu cách. Hãy đếm số lượng từ khác nhau trong xâu S và in ra từ có thứ tự từ điển nhỏ nhất, lớn nhất trong xâu S.

Input Format

Xâu kí tự S.

Constraints

1 ≤ len(S) ≤ 10^6;

Output Format

Dòng đầu tiên in ra số lượng từ khác nhau trong xâu. Dòng thứ 2 in ra từ có thứ tự từ điển nhỏ nhất và lớn nhất trong xâu.

Sample Input 0

ngo ngoc an nguyen an ngoc ngoc

Sample Output 0

4
an nguyen


*/
int main(){
    string s,tmp; getline(cin,s);
    stringstream ss(s);
    set<string> st;
    while(ss>>tmp){
        st.insert(tmp);
    }
    cout<<st.size()<<endl<<*st.begin()<<' '<<*st.rbegin();

    
    return 0;
}