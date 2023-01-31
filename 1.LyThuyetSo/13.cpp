#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

/*
Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.

Input Format

Cặp số N, p được viết cách nhau một khoảng trống.

Constraints

1≤N≤10^14; 2≤p≤5000

Output Format

Đưa ra kết quả trên một dòng

Sample Input 0

7 3

Sample Output 0

2


*/

ll legendre(ll n, int p){
    ll res = 0;
    while(n >= p){
        res += n/(p*1ll);
        n/=(p*1ll);
    }
    return res;
}

int main() {
    ll n; cin>>n;
    int k; cin>>k;
    cout<<legendre(n,k);
}