#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Trong lớp học của Tèo có các thanh domino hình chữ nhật có chiều rộng a và có chiều cao b. Tèo hiện là học sinh lớp 1, thầy giáo có giao cho Tèo một bài toán đó là hãy tìm 1 bảng hình vuông có cạnh nhỏ nhất sao cho có thể xếp n thanh domino vào hình vuông này. Tèo không nhất thiết phải xếp kín cái bảng hình vuông này nhưng không được phép xoay ngang thanh domino. Dưới đây là một ví dụ về cách xếp thanh domino có a = 2, b = 3 vào bảng hình vuông có cạnh 9

image

Input Format

3 số a, b, n trên 1 dòng

Constraints

1<=n,a,b<=10^9;

Output Format

In ra chiều dài cạnh của hình vuông nhỏ nhất tìm được.

Sample Input 0

2 3 10

Sample Output 0

9


*/

int n,a,b;
//xac dinh ham monotonic
bool check(ll side){
    ll x = side/a, y = side/b;
    // x*y >= n se bi tran
    return x >= (double)n/y;
}
int main() {
    cin>>a>>b>>n;
    ll l = 0, r = 1ll*n*max(a,b);    
    ll res; 
    while(l <= r){
        ll m=(l+r)/2;
        if(check(m)){
            res = m;
            r = m-1;
        }else{
            l = m+1;
        }
    }
    cout<<res;

}
