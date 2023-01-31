#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. Ước số nguyên tố nhỏ nhất của 1 là 1. Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

Input Format

Một số N được ghi trên một dòng.

Constraints

1≤N≤100000

Output Format

Đưa ra kết quả theo từng dòng

Sample Input 0

6

Sample Output 0

1
2
3
2
5
2


*/

const int maxV = 1e7;
int prime[maxV];

void sieve(){
    for(int i=0; i<=maxV; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i=2; i<=sqrt(maxV); i++){
        if(prime[i]){
            for(int j=i*i; j<=maxV; j+=i){
                prime[j] = 0;
            }
        }
    }
}

int thuaso(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return i;
        }
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        if(i==1){
            cout<<i<<endl;
        }else if(prime[i]){
            cout<<i<<endl;
        }else{
            cout<<thuaso(i)<<endl;
        }
    }

    
}