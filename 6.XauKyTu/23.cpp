#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho các từ chỉ bao gồm chữ cái in hoa và in thường, bạn được yêu cầu ghép các từ này lại với nhau sao cho từ được ghép lại sau cùng có thứ tự từ điển lớn nhất.

Input Format

Dòng đầu tiên là số nguyên dương N - số lượng từ; Dòng thứ 2 gồm N từ, mỗi từ cách nhau một dấu cách.

Constraints

1≤N≤1000;

Output Format

In ra xâu sau khi ghép.

Sample Input 0

4
ab abc abcd aa

Sample Output 0

abcdabcabaa


*/
int main() {
    int n; cin>>n;
    vector<string> vt(n);
    string tmp;
    for(int i=0; i<n; i++){
        cin>>vt[i];
    }
    sort(vt.begin(), vt.end(), [](string a, string b)->bool{
        string s1 = a+b;
        string s2 = b+a;
        return s1>s2;
    });
    for(string s:vt){
        cout<<s;
    }
    
}
