#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
28tech rất yêu thích con số 28 vì thế anh ta có bài toán sau và nhờ bạn tìm lời giải. Cho một xâu kí tự S chỉ bao gồm kí tự 2 và kí tự 8, bạn hãy tìm xâu con liên tiếp có độ dài lớn nhất mà trong đó chứa nhiều nhất X kí tự 2 và Y kí tự 8.

Input Format

    Dòng 1 chứa xâu S

    Dòng 2 chứa 2 số X, Y

Constraints

    2 <=len(S) <= 10^6

Output Format

In ra đáp án của bài toán

Sample Input 0

8228282888
3 3

Sample Output 0

6


*/

int main() {
    string s; cin>>s;
    int x,y; cin>>x>>y;
    int cnt2=0,cnt8=0,len=0,l=0;
    for(int r=0; r<s.size(); r++){
        if(s[r] == '2'){cnt2++;}
        else{cnt8++;}
        if(cnt2>x || cnt8>y){
            if(s[l] == '2'){cnt2--; l++;}
            else{cnt8--; l++;}
        }
        len = max(len, r-l+1);
    }
    cout<<len;

    
}
