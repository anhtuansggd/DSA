#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;


/*
Cho 2 xâu kí tự S1 và S2 chỉ bao gồm chữ cái in hoa và in thường, hãy tìm các kí tự xuất hiện trong xâu S1 mà không xuất hiện trong xâu S2, và các kí tự chỉ xuất hiện trong xâu S2 mà không xuất hiện trong xâu S1. Các ký tự được in ra theo thứ tự từ điển và chỉ liệt kê mỗi ký tự một lần.

Input Format

Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2.

Constraints

1≤len(S1)≤100000; 1≤len(S2)≤100000.

Output Format

Dòng đầu tiên in ra các ký tự chỉ xuất hiện trong S1 mà không xuất hiện trong S2. Dòng thứ 2 in ra các ký tự chỉ xuất hiện trong S2 mà không xuất hiện trong S1.

Sample Input 0

fAOxTUeAIs
aVUkULeRYw

Sample Output 0

AIOTfsx
LRVYakw


*/

int main() {
    string s1,s2; cin>>s1>>s2;
    int cnt1[256]={0}, cnt2[256]={0};
    for(char c:s1){cnt1[c]++;}
    for(char c:s2){cnt2[c]++;}
    for(int i=0; i<256; i++){
        if(cnt1[i]!=0 && cnt2[i]==0){
            cout<<(char)i;
        }
    }
    cout<<endl;
    for(int i=0; i<256; i++){
        if(cnt2[i]!=0 && cnt1[i]==0){
            cout<<(char)i;
        }
    }

    

}
    