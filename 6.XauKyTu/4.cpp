#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự, hãy tìm kí tự có số lần xuất hiện ít nhất trong xâu và kí tự có số lần xuất hiện nhiều nhất ở trong xâu. Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất hoặc nhỏ nhất thì in ra kí tự có thứ tự từ điển lớn nhất.

Input Format

Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.

Constraints

1≤len(S)≤100000.

Output Format

Dòng đầu tiên in ra kí tự có số lần xuất hiện nhiều nhất, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhiều nhất thì chọn kí tự có thứ tự từ điển lớn nhất. Dòng thứ 2 in ra kí tự có số lần xuất hiện nhỏ nhất nhất, trong trường hợp có nhiều kí tự có cùng số lần xuất hiện nhỏ nhất thì chọn kí tự có thứ tự từ điển lớn nhất.

Sample Input 0

qEQtEEuAQcSWfFRfWRnKKeCZeUYlSGrXWvOGqEXsWMxLRtQPxBMtEHdPGbGKvKFiQLxUSuSZtMIjXEhUZtAZdBInYLeHWfWUwCVo

Sample Output 0

W 6
w 1


*/

int main() {
    string s; cin>>s;
    int cnt[256] = {0};
    for(int i=0; i<s.size(); i++){
        cnt[s[i]]++;
    }
    int maxV = INT_MIN, minV = INT_MAX; 
    for(int i=0; i<123; i++){
        if(cnt[i]>=maxV){
            maxV = cnt[i];
        }
        if(cnt[i] != 0 && cnt[i]<=minV){
            minV = cnt[i];
        }
    }
    for(int i=122; i>=0; i--){
        if(cnt[i]==maxV && maxV!=0){
            cout<<(char)i<<' '<<maxV; break;
        }
    }
    cout<<endl;
    for(int i=122; i>=0; i--){
        if(cnt[i]==minV && minV!=0){
            cout<<(char)i<<' '<<minV; break;
        }
    }

    

}
    