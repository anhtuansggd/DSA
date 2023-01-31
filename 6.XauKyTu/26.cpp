#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp chứa các kí tự giống nhau dài nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra xâu con tìm được.

Sample Input 0

zzaabc

Sample Output 0

zz


*/
int main() {
    string s; cin>>s;
    int cnt = 1,res_cnt = 1;
    string res = "";
    res += s[0];
    s += "@";
    for(int i=1; i<=s.size(); i++){
        if(s[i]==s[i-1]){
            cnt++;
        }else{
            if(cnt > res_cnt){
                res_cnt = cnt;
                res = string(res_cnt, s[i-1]);
            }else if(cnt == res_cnt){
                string tmp = string(res_cnt, s[i-1]);
                if(tmp>res){
                    res = tmp;
                }
            }
            cnt = 1;
        }
    }
    cout<<res;
    


}
