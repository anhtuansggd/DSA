#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Kiểm tra xem một số nguyên không âm N có chia hết cho 4 hay không, số chia hết cho 4 là số có nhiều hơn 1 chữ số mà có 2 chữ số tận cùng chia hết cho 4 hoặc là số có 1 chữ số chia hết cho 4.

Input Format

Số nguyên không âm N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N là số chia hết cho 4, ngược lại in ra NO.

Sample Input 0

516

Sample Output 0

YES


*/
int main() {
    string s; cin>>s;
    s = '0' + s;
    int n = stoi(s.substr(s.length()-2));
    if(n%4==0){
        cout<<"YES";
    }else cout<<"NO";

  
}
