#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp sao cho không có 2 kí tự nào liền kề giống nhau có độ dài lớn nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra xâu con là kết quả của bài toán

Sample Input 0

zzaabc

Sample Output 0

abc


*/
int main() {
    string s; cin>>s;
    int cnt = 1, res_cnt = 1;
    string res_t = "",tmp="";
    res_t += s[0]; tmp += s[0];
    s += s[s.size()-1];
    for(int i=1; i<s.size(); i++){
        if(s[i]!=s[i-1]){
            cnt++; tmp += s[i];
        }else{
            if(cnt > res_cnt){
                res_cnt = cnt;
                res_t = tmp;
            }else if(cnt == res_cnt){
                if(tmp>res_t){
                    res_t = tmp;
                }
            }
            tmp = "";
            tmp += s[i];
            cnt = 1;
        }
    }
    cout<<res_t;
    
}
