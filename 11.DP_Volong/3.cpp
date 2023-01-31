#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;

/*
Cho dãy số Tribonacci với F[0] = 0, F[1] = 0, F[2] = 1, F[n] = F[n - 1] + F[n - 2] + F[n - 3] với n >= 3. Hãy tính F[n] chia dư cho 10^9 + 7.

Input Format

    Dòng 1 là số bộ test T

    T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

Constraints

    1<=T<=10000

    0<=N<=10^6

Output Format

Đưa ra kết quả của mỗi test trên 1 dòng

Sample Input 0

7
8
14
12
7
9
7
12

Sample Output 0

24
927
274
13
44
13
274


*/

ll a[10000000];

ll Trib(int n){
    if(n==0 || n==1){
        return 0;
    }else if(n==2) return 1;
    if(a[n]!=-1){ return a[n]; }
    a[n] = (Trib(n-1)%Mod + Trib(n-2)%Mod + Trib(n-3)%Mod)%Mod;
    return a[n];
}

int main() {
    for(ll &x:a){x=-1;}
    int n; cin>>n;
    while(n--){
        int k; cin>>k;
        cout<<Trib(k)<<endl;
    }
    
}
