#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy tìm số lớn nhất xuất hiện trong xâu. Ví dụ S = "abc123bba567ajsj50kkf099" thì số lớn nhất xuất hiện trong xâu là số 567, chú ý trong trường hợp một số có các số 0 đứng trước thì ta loại bỏ các số 0 ở đầu, trong ví dụ số 099 ta tính là số 99, 000 ta tính là số 0.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra số lớn nhất xuất hiện trong xâu, dữ liệu đảm bảo có ít nhất 1 số xuất hiện trong xâu.

Sample Input 0

abc123bba567ajsj50kkf099

Sample Output 0

567


*/
int main() {
    string s,tmp; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    vector<string> vt;
    while(ss >> tmp){
        while(tmp.size()>1 && tmp[0]-'0'==0){
            tmp.erase(0,1);
        }
        vt.push_back(tmp);
    }
    sort(vt.begin(), vt.end(), [](string a, string b)->bool{
        if(a.size()==b.size()){
            return a>b;
        }else{
            return a.size()>b.size();
        }
    });
    cout<<vt[0];
    
}
