#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho ba số a, x, y. Nhiệm vụ của bạn là tìm ước số chung lớn nhất của hai số P và Q, trong đó P lặp lại x lần số a và Q lặp lại y lần số a. Ví dụ a = 2, x = 3, y = 2 thì P=222, Q=22. Khi đó UCLN(P, Q) = 2

Input Format

Dòng đầu tiên là số a. Dòng số 2 là số x. Dòng số 3 là số y.

Constraints

1<=a,x,y<=10^18

Output Format

In ra đáp án của bài toán

Sample Input 0

4
10
8

Sample Output 0

44


*/

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }else return gcd(b, a%b);
}

int main() {
    ll a,x,y; cin>>a>>x>>y;
    for(int i=0; i<gcd(x,y); i++){
        cout<<a;
    }
  
}
