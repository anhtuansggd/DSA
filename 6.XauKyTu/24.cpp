#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho xâu S chỉ bao gồm các kí tự in thường, hãy đếm số lượng xâu con (xâu ký tự chứa các chữ cái liên tiếp) mà có kí tự đầu và kí tự cuối giống nhau.

Input Format

Một dòng duy nhất chứa xâu S chỉ bao gồm chữ cái in thường.

Constraints

1≤len(S)≤100000;

Output Format

In ra đáp án của bài toán.

Sample Input 0

abcda

Sample Output 0

6

Explanation 0

Các xâu con có kí tự đầu cuối giống nhau : a, b, c, d, a, abcda
*/
int main() {
    int cnt[256]={0};
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        cnt[s[i]]++;
    }
    ll sum = s.size();
    for(int i=0; i<s.size(); i++){
        if(cnt[s[i]]!=0){
            int n = cnt[s[i]];
            sum += 1ll*n*(n-1)/2;
            cnt[s[i]] = 0;
        }
    }
    cout<<sum;

    
}
