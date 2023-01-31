#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho xâu kí tự S, Tèo là một người khá kì quặc, anh ta chỉ thích những thứ không trùng lặp. Vì thế anh ta yêu cầu bạn tìm ra độ dài xâu con dài nhất mà các kí tự trong xâu con đó không có bất cứ một kí tự nào được lặp lại.

Input Format

Dòng duy nhất chứa xâu S

Constraints

    1<=len(S)<=10^6

    S chỉ bao gồm chữ cái in thường

Output Format

In ra đáp án của bài toán

Sample Input 0

dabacdadbbdd

Sample Output 0

4


*/
int main() {
    string s; cin>>s;
    int l=0,cnt[256] = {0},res=1;
    for(int r=0; r<s.length(); r++){
        cnt[s[r]]++;
        while(cnt[s[r]]==2){
            cnt[s[l]]--;
            l++;
        }
        res = max(res, r-l+1);
    }
    cout<<res;

}
