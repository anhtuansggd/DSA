#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;

/*
Tìm ước số nguyên tố lớn nhất của một số nguyên dương.

Input Format

Dòng đầu tiên là số lượng test case T; T dòng tiếp theo mỗi dòng là một số nguyên dương N

Constraints

1≤T≤500; 2≤N≤10000000

Output Format

Ước số nguyên tố lớn nhất của n in ra mỗi test case trên 1 dòng

Sample Input 0

2
10
17

Sample Output 0

5
17


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


int pt(int n){
    int maxTmp = INT_MIN;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            maxTmp = i;
            while(n%i==0){
                n /= i;
            }
        }
    }
    if(n>1){return n;}
    return maxTmp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        if(prime[x]){
            cout<<x<<endl;
        }else{
            cout<<pt(x)<<endl;
        }
    }
    return 0;
}    