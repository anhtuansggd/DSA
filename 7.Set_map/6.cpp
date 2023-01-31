#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho một xâu kí tự S chỉ bao gồm các kí tự từ a tới z. Bạn được yêu cầu thực hiện các nhiệm vụ sau bằng CTDL phù hợp. - 1. Tìm kí tự có tần suất xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.

        Tìm kí tự có tần suất xuất hiện nhỏ nhất và có thứ tự từ điển lớn nhất. 
        Tìm số lượng kí tự khác nhau trong xâu.

Input Format

Xâu kí tự S.

Constraints

1 ≤ len(S) ≤ 10^6;

Output Format

    Dòng đầu tiên in ra kí tự có tần suất lớn nhất, nếu có nhiều kí tự có cùng tần suất in ra kí tự có thứ tự từ điển nhỏ nhất.

    Dòng thứ 2 in ra kí tự có tần suất nhỏ nhất, nếu có nhiều kí tự có cùng tần suất thì in ra kí tự có thứ tự từ điển lớn nhất.

    Dòng 3 in ra số lượng kí tự khác nhau trong xâu.

Sample Input 0

mghzbzhrucvwjssatuhlwcradwtbmyqdjcksyskvhrgcubvtoimrjwnanfqgenshrjtf

Sample Output 0

h 5
o 1
24


*/

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}
int main(){
    string s; cin>>s;
    set<char> st;
    map<int, int> mp;
    for(char c:s){st.insert(c); mp[c]++;}
    int a, maxV=INT_MIN;
    for(auto it:mp){
        if(it.second>maxV){
            a = it.first;
            maxV = it.second;
        }
    }
    int b, minV=INT_MAX;
    for(auto it:mp){
        if(it.second<=minV){
            b = it.first;
            minV = it.second;
        }
    }
    cout<<(char)a<<' '<<maxV<<endl;
    cout<<(char)b<<' '<<minV<<endl;
    cout<<st.size();




    return 0;
}