#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Một số được coi là số đẹp nếu nó có tất cả các chữ số là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

Input Format

Số nguyên dương N

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N là số đẹp, ngược lại in ra NO.

Sample Input 0

373

Sample Output 0

YES


*/
int ngto(int n){
    for(int i=2;i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int main() {
    string s; cin>>s;
    ll sum = 0;
    for(int i=0; i<s.size(); i++){
        if(ngto(s[i]-'0')==0){
            cout<<"NO"; return 0;
        }
        sum += s[i]-'0';
    }
    if(ngto(sum)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    
}
