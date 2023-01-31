#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Kiểm tra xem một số nguyên không âm N có chia hết cho 25 hay không? Số chia hết cho 25 nếu nó có 2 chữ số tận cùng là 2 số 0 hoặc là số chia hết cho 25.

Input Format

Số nguyên không âm N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N chia hết cho 25, ngược lại in ra NO.

Sample Input 0

150

Sample Output 0

YES


*/

int main() {
    string s; cin>>s;
    s = '0'+s;
    int t = stoi(s.substr(s.length()-2));
    if(t==0 || t%25==0){
        cout<<"YES";
    }else cout<<"NO";
       
   

    
}
