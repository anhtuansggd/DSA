#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho 2 xâu kí tự S1 và S2, hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

Input Format

Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2. Các ký tự trong 2 xâu chỉ bao gồm chữ cái in hoa hoặc in thường.

Constraints

1≤len(S1)≤100000; 1≤len(S2)≤100000.

Output Format

Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần. Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.

Sample Input 0

nTOhOGvRBk
bUJtZSoONh

Sample Output 0

Oh
BGJNORSTUZbhknotv


*/

int cnt1[256]={0};
int cnt2[256]={0};
int main() {
    string s1,s2; cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++){
        cnt1[s1[i]] = 1;
    }
    for(int i=0; i<s2.size(); i++){
        cnt2[s2[i]] = 1;
    }
    for(int i=0; i<256; i++){
        if(cnt1[i] && cnt2[i]){
            cout<<(char)i;
        }
    }
    cout<<endl;
    for(int i=0; i<256; i++){
        if(cnt1[i] || cnt2[i]){
            cout<<(char)i;
        }
    }
    
}
    