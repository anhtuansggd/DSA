#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1000000007;

/*
Đếm số cách đặt 2 con mã trên bàn cờ vua cỡ k × k với k = 1, 2, 3, .. n sao cho chúng không ăn nhau, 2 con mã này được coi là giống nhau.

Input Format

Số nguyên dương n duy nhất

Constraints

1≤n≤10000

Output Format

Gồm n dòng, mỗi dòng là đáp án của bài toán.

Sample Input 0

7

Sample Output 0

0
6
28
96
252
550
1056

Explanation 0

Giải thích : với bàn cờ cỡ 1 x 1, không có cách nào. Với bàn cờ cỡ 2x2 có 6 cách đặt 2 con mã sao cho chúng không ăn nhau. Tương tự với các cỡ từ 3 tới 7.
*/

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll  long long 
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define FORR(i, a, b) for(int i=a; i>b; i--)
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll> 


int main(){
    int n; cin>>n;
    /*
    Cach de 2 con ma an nhau:
    1 HCN 2*3 se co 2 cach
    (i-2+1) va (i-3+1) la so cach dat HCN vao ban co N*N
    ma HCN cung co the xep 3*2 nen co them *2
    -> Tong so cach xep trong ban co (To Hop Chap 2) - so cach an nhau = so cach khong an nhau
    */
    for(int i=1; i<=n; i++){
        ll cach_an_nhau = 2 * (i-2+1) * (i-3+1) * 2;
        ll tong_so_cach = (1ll*(i*i)*(i*i-1))/2;
        cout<<tong_so_cach-cach_an_nhau<<endl;
    }
}    