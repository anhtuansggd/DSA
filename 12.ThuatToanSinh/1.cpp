#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Cho xâu nhị phân S, hãy in ra xâu nhị phân kế tiếp của S. Trong trường hợp S là xâu nhị phân cuối cùng thì in ra xâu nhị phân đầu tiên.

Input Format

1 dòng duy nhất chưa xâu nhị phân S

Constraints

1<=len(S)<=1000;

Output Format

In ra xâu nhị phân kế tiếp.

Sample Input 0

1110010

Sample Output 0

1110011

Sample Input 1

11111

Sample Output 1

00000


*/

int main(){
    string s; cin>>s;
    int n = s.length();
    while(n>=0 && s[n-1]=='1'){
        s[n-1] = '0';
        n--;
    }
    if(n>0){
        s[n-1]='1';
    }
    
    cout<<s;


}