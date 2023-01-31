#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k.

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng nhỏ hơn k

Sample Input 0

4 5
2 2 2 2

Sample Output 0

6


*/

int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a,a+n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        //i+1 => n-1 ? k - a[i]
        auto it = lower_bound(a+i+1,a+n,k-a[i]);
        it--;
        sum += (it-a)-i;
    }
    cout<<sum;




    
}
