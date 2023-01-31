#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho xâu S chỉ gồm chữ cái in thường, nhiệm vụ của bạn là tìm chiều dài của xâu con liên tiếp nhỏ nhất có chứa đầy đủ các kí tự khác nhau của S. Ví dụ S = abcaaaabcad thì xâu con bcad có độ dài nhỏ nhất và chứa đầy đủ các kí tự khác nhau của S.

Input Format

Dòng duy nhất chứa xâu S

Constraints

1<=len(S)<=10^6

Output Format

In ra độ dài xâu con nhỏ nhất tìm được

Sample Input 0

bcceedeeaedda

Sample Output 0

9


*/
int cnt(string s){
    int cnt[256] = {0}, cur_cnt=0;
    for(char c:s){
        cnt[c]++;
        if(cnt[c]==1){cur_cnt++;}
    }
    return cur_cnt;
}

int xu_ly(string s){
    int k=cnt(s);
    int l=0, cnt[256] = {0}, cur_cnt=0, min_len=1e9;
    for(int r=0; r<s.size(); r++){
        cnt[s[r]]++;
        if(cnt[s[r]]==1){ cur_cnt++; }
        while(cur_cnt == k){
            min_len = min(min_len, r-l+1);
            if(cnt[s[l]]==1){break;}
            cnt[s[l]]--;
            l++;
        }
    }
    return min_len;

}

int main() {
    string s; cin>>s;
    cout<<xu_ly(s);
    


}
