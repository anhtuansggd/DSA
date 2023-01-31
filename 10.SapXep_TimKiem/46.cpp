#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Bạn được cung cấp một mảng chứa n số nguyên dương. Nhiệm vụ của bạn là chia mảng thành k mảng con liên tiếp sao cho tổng lớn nhất trong một mảng con càng nhỏ càng tốt. (Gợi ý sử dụng binary search on answer. Binary search trên tổng lớn nhất của 1 mảng con)

Input Format

Dòng đầu tiên chứa hai số nguyên n và k: kích thước của mảng và số mảng con trong phép chia. Dòng tiếp theo chứa n số nguyên x1, x2,…, xn: nội dung của mảng.

Constraints

1≤n≤2⋅10^5; 1≤k≤n; 1≤xi≤10^9;

Output Format

In một số nguyên: tổng lớn nhất trong một mảng con trong phép chia tối ưu.

Sample Input 0

5 3
2 4 7 3 5

Sample Output 0

8


*/

int n, k, a[200005];
bool check(ll x){
    //x la day con lon nhat
    //dem voi x la day con lon cho phep thi mang
    //chia duoc thanh bao nhieu mang con <= k
    int cnt=0;
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(a[i] > x){return false;}
        sum += a[i];
        if(sum > x){
            cnt++;
            sum = a[i];
        }
    }
    cnt++; // day con cuoi cung 
    return cnt <= k; 
}
int main() {
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll l = *max_element(a,a+n), r = accumulate(a, a+n, 0ll);
    ll res; 
    while(l <= r){
        ll m=(l+r)/2;
        if(check(m)){
            res = m;
            r = m-1;
        }else{
            l = m+1;
        }
    }
    cout<<res;

}
