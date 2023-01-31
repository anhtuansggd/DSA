#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;

/*
Đề bài rất đơn giản, bạn hãy tính N! chia dư cho (10^9 + 7).

Input Format

    Dòng 1 là số bộ test T

    T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

Constraints

    1<=T<=10000

    0<=N<=10^6

Output Format

Đưa ra kết quả của mỗi test trên 1 dòng

Sample Input 0

5
11
6
8
10
13

Sample Output 0

39916800
720
40320
3628800
227020758


*/

ll a[10000000];

ll chiaDu(int n){
    if(n==2 || n==1){
        return n;
    }
    if(a[n]!=-1){ return a[n]; }
    a[n] = (1ll*(n%Mod)*(chiaDu(n-1)%Mod))%Mod;
    return a[n];
}

int main() {
    for(ll &x:a){x=-1;}
    int n; cin>>n;
    while(n--){
        int k; cin>>k;
        cout<<chiaDu(k)<<endl;
    }
    
}
