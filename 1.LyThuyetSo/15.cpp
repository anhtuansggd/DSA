#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;

/*
Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

Input Format

Một số nguyên dương N

Constraints

1≤N≤10^18

Output Format

Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không.

Sample Input 0

999923001838986077

Sample Output 0

1

Sample Input 1

30

Sample Output 1

1


*/

const int maxn = 1e7; 
bool prime[maxn+1];
void sieve(){
    for(int i=0; i<=maxn; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for(int i=2; i<=sqrt(maxn); i++){
        for(int j = i*i; j<=maxn; j+=i){
            prime[j] = false;
        }
    }
}


ll Sphenic(ll n){
    int cnt = 0;
    for(int i=2; i<=sqrt(n); i++){
        if(prime[i] && n%i==0){
            if(n%1ll*i*i){ return 0; }
            int cntPow = 0;
            while(n%i==0){
                cnt++; cntPow++;
                n /= i;
            }
            if(cnt>3 || cntPow>=2){ return 0;}
        }
    }
    if(n>1){cnt++;}
    return cnt==3;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    ll n; cin>>n;
    cout<<Sphenic(n);
}    