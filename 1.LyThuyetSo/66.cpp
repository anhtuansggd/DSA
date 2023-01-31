#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho bạn 2 số N và x, bạn hãy tìm số dư của n khi chia cho 2^x.

Input Format

1 dòng duy nhất chứa 2 số N và x

Constraints

0<=N<=10^9; 0<=x<=10^6;

Output Format

In ra đáp án của bài toán

Sample Input 0

999995888 6

Sample Output 0

48

Sample Input 1

999976533 7

Sample Output 1

85


*/


int main() {
    int n,x; cin>>n>>x;
    int k = pow(2,x);
    if(k>n){
        cout<<n;
        return 0;
    }else{
        cout<<n%k;
    }
    
}