#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một số có N chữ số, nhiệm vụ của bạn là tìm số dư của N với số 10^9+7

Input Format

Dòng đầu tiên là N : số lượng chữ số; Dòng thứ 2 là N số là các chữ số của số ban đầu viết cách nhau một dấu cách.

Constraints

1<=N<=100000; Các chữ số là số có 1 chữ số

Output Format

In ra đáp án của bài toán

Sample Input 0

7
5 5 9 5 3 9 7 

Sample Output 0

5595397


*/

int main() {
    int n,tmp; cin>>n;
    ll res = 0;
    while(n--){
        cin>>tmp;
        res = ((res*10)%Mod + tmp%Mod)%Mod;
    }
    cout<<res;

}