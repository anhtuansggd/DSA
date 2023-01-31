#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Nhập vào một số và kiểm tra xem số vừa nhập có phải là số trong dãy fibonacci hay không? Biết rằng số fibonacci bắt đầu bằng 0 và 1.

Input Format

Số nguyên không âm n

Constraints

0≤n≤9*10^18

Output Format

In ra YES nếu n là số Fibonacci, ngược lại in NO

Sample Input 0

0

Sample Output 0

YES

Sample Input 1

18636

Sample Output 1

NO


*/

ll F[93];
bool Fibo(ll n){
    if(n==0 || n==1){return true;}
    F[0] = 0;
    F[1] = 1;
    for(int i=2; i<93;i++){
        F[i] = (F[i-2] + F[i-1]);
        if(F[i] == n){
            return true;
        }
    }
    return false;
}


int main() {
    ll n; cin>>n;
    if(Fibo(n)){cout<<"YES";}
    else cout<<"NO";
    
}