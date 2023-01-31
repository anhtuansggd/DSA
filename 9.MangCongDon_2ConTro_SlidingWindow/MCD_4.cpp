#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho mảng số nguyên A[] gồm N phần tử, mảng hiệu của mảng a là mảng D[] với D[0] = A[0] và D[i] = A[i] - A[i - 1] . Nhiệm vụ của bạn là xây dựng mảng hiệu của mảng A[]

Input Format

    Dòng 1 là N

    Dòng 2 là N số nguyên

Constraints

    1<=N<=10^6

    1<=A[i]<=10^9

Output Format

In ra mảng hiệu của mảng A[]

Sample Input 0

5
7 6 9 9 8 

Sample Output 0

7 -1 3 0 -1 


*/

int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){cin>>x;}
    int d[n];
    d[0] = a[0];
    for(int i=1; i<n; i++){
        d[i] = a[i] - a[i-1];
    }
    for(int &x:d){cout<<x<<' ';}



    
}
