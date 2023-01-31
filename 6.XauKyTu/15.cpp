#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?

Input Format

Dòng đầu tiên là xâu S. Dòng thứ 2 là xâu T.

Constraints

1≤len(S)≤100000; 1≤len(T)≤100000;

Output Format

In ra YES nếu xâu T xuất hiện trong xâu S, ngược lại in ra NO.

Sample Input 0

aabcacbdaa
cacb

Sample Output 0

YES


*/

int main() {
    string a,b; getline(cin,a); getline(cin,b);
    if(a.find(b)!=string::npos){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


}
    