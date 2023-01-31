#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

/*
Input Format

2 số nguyên dương a, b

Constraints

1≤a,b≤10^9

Output Format

In ra kết quả của bài toán.

Sample Input 0

2 10

Sample Output 0

1024


*/

long long bin_pow(int a, int b){
    if(b == 0){
        return 1;
    }
    long long x = bin_pow(a, b/2);
    if(b%2==0){
        return x%mod * x%mod;
    }else{
        return x%mod * x%mod * a%mod;
    }
}

int main() {
    int a,b; cin>>a>>b;
    cout<<bin_pow(a,b);

    
    return 0;
}