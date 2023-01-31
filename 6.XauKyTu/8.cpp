#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Xâu pangram là xâu có chứa đầy đủ các kí tự từ A tới Z không phân biệt chữ hoa hay thường. Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?

Input Format

Xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường.

Constraints

1≤len(S)≤100000;

Output Format

In ra YES nếu S là xâu pangram, ngược lại in NO.

Sample Input 0

abcdefghijklmnopqrstuvwxyz

Sample Output 0

YES


*/

bool check(string s){
    int cnt[256]={0};
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
        cnt[s[i]]=1;;
    }
    for(int i=97; i<=122; i++){
        if(cnt[i]!=1){
            return 0;
        }
    }
    return 1;
}

int main() {
    string s; cin>>s;
    if(check(s)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    

}
    