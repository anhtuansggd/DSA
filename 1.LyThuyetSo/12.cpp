#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

Input Format

Số nguyên dương N

Constraints

2≤N≤10^16

Output Format

Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

Sample Input 0

60

Sample Output 0

2^2 * 3^1 * 5^1


*/

void pt(ll n){
    for(int i=2; i<=sqrt(n); i++){
        int cnt = 0;
        if(n%i==0){
            while(n%i==0){
                n /= i; cnt++;
            }
            if(n==1){
                cout<<i<<"^"<<cnt;
            }else{
                cout<<i<<"^"<<cnt<<" * ";
            }
        }
        
    }
    if(n>1){cout<<n<<"^1";}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    pt(n);
    
}    