#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;

/*
Cho dãy số Fibonacci với F[0] = 0, F[1] = 1, F[n] = F[n - 1] + F[n - 2] với n >= 2. Hãy tính F[n] chia dư cho 10^9 + 7.

Input Format

    Dòng 1 là số bộ test T

    T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

Constraints

    1<=T<=10000

    0<=N<=10^6

Output Format

Đưa ra kết quả của mỗi test trên 1 dòng

Sample Input 0

6
5
13
10
14
8
11

Sample Output 0

5
233
55
377
21
89


*/

ll a[10000000];

ll Fib(int n){
    if(n==0 || n==1){
        return n;
    }
    if(a[n]!=-1){ return a[n]; }
    a[n] = (Fib(n-1)%Mod + Fib(n-2)%Mod)%Mod;
    return a[n];
}

int main() {
    for(ll &x:a){x=-1;}
    int n; cin>>n;
    while(n--){
        int k; cin>>k;
        cout<<Fib(k)<<endl;
    }
    
}
