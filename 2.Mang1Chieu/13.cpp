#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ tiền mỗi mệnh giá là không hạn chế. Một người cần đổi số tiền có giá trị bằng N. Hãy xác định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?

Input Format

Gồm 1 số nguyên N

Constraints

1 ≤ N ≤ 10^14

Output Format

Số lượng tờ tiền ít nhất có tổng bằng N.

Sample Input 0

121

Sample Output 0

3


*/

int main() {
    ll n; cin>>n;
    int a[10] = {1000,500,200,100,50,20,10,5,2,1};
    ll res = 0;
    for(int x:a){
        res += (n/x);
        n %= x; 
    }
    cout<<res;
}