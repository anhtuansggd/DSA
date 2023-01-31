#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Một nhà máy có n máy có thể được sử dụng để tạo ra sản phẩm. Mục tiêu của bạn là tạo ra tổng số sản phẩm. Đối với mỗi máy, bạn biết số giây nó cần để tạo ra một sản phẩm. Các máy có thể hoạt động đồng thời và bạn có thể tự do quyết định lịch trình của chúng. Thời gian ngắn nhất cần thiết để làm ra t sản phẩm là bao nhiêu? (Gợi ý : Binary search on answer)

Input Format

Dòng nhập đầu tiên có hai số nguyên n và t: số lượng máy móc và sản phẩm. Dòng tiếp theo ghi n số nguyên k1, k2,…, kn: thời gian cần thiết để tạo ra một sản phẩm sử dụng mỗi máy.

Constraints

1≤n≤2⋅10^5; 1≤t≤10^9; 1≤ki≤10^9;

Output Format

In một số nguyên: thời gian tối thiểu cần thiết để tạo ra t sản phẩm.

Sample Input 0

3 7
3 2 5

Sample Output 0

8

Explanation 0

Giải thích test : Trong 8s, máy 1 làm được 2 sản phẩm, máy 2 làm được 4, máy 3 làm được 1 sản phẩm.
*/
int n, total, a[200005];
//xac dinh ham monotonic
bool check(ll x){
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += (x/a[i]);
    }
    return sum>=total;
}
int main() {
    cin>>n>>total;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll l = 0, r = 1ll*total*(*min_element(a,a+n));    
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
