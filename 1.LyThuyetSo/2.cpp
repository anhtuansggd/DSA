#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

/*
Cho số nguyên không âm N, liệt kê các số nguyên tố không vượt quá N.

Input Format

Số nguyên N

Constraints

0≤n≤10^7

Output Format

In ra các số nguyên tố không vượt quá N trên 1 dòng, các số cách nhau một khoảng trắng.

Sample Input 0

13

Sample Output 0

2 3 5 7 11 13 


*/

void sieve(int n){
    bool prime[n];
    //ban dau xem cac so nhu la so nguyen to
    for(int i=0; i<n; i++){
        prime[i] = true;
    }
    //0 va 1 khong la so nguyen to
    prime[0] = prime[1] = false;
    //neu mot so co nhieu hon 1 thua so nguyen to
    //thi khong phai la so nguyen to 
    for(int i=2; i<=sqrt(n); i++){
        for(int j = i*i; j<=n; j+=i){
            prime[j] = false;
        }
    }
    for(int i=0; i<=n; i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n; cin>>n;
    sieve(n);

    
    return 0;
}