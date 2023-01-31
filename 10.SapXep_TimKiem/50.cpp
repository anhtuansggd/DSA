#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Kì thì cuối kì môn Triết ở trường đại học xyz sắp diễn ra. Tèo và bạn bè có ý định sẽ photo phao thi để bán kiếm tiền, hiện tại Tèo và bạn của mình đã có bản gốc của phao thi. Theo ước tính của tèo thì có n bạn sẽ mua phao thi của tèo. Tèo không có ý định bán bản phao gốc của mình nên sẽ đi photo n bản nữa để bán, tới quán photo chỉ còn 2 máy photo có thể hoạt động. Trong đó máy photo 1 cần x giây để photo xong phao thi cho Tèo, máy thứ 2 cần y giây. Vì muốn nhanh chóng đem phao đi bán nên Tèo muốn nhờ bạn tính hộ là anh ấy cần ít nhất bao nhiêu giây để có thể photo ra n bản khác từ 1 bản gốc ban đầu. Chú ý các máy photo có thể photo từ bản gốc hoặc có thể photo từ bản đã sao đã được in từ bản gốc. 2 máy này có thể hoạt động một cách đồng thời.

Input Format

1 dòng chứa ba số nguyên n, x và y;

Constraints

(1≤n≤2⋅10^8, 1≤x, y≤10).

Output Format

In ra thời gian tối thiểu mà Tèo cần.

Sample Input 0

5 1 2

Sample Output 0

4

Explanation 0

Tèo cần photo 5 bản, ban đầu Tèo dùng máy số 1 để photo ra ban sao đầu tiên. Sau đó còn lại 3 giây, Tèo photo được 3 bản từ máy 1 và 1 bản từ máy 2. Vậy là đủ 5 bản.
*/


ll n,a,b;
//xac dinh ham monotonic
bool check(ll time){
    time -= min(a,b);
    //n-1 vi da sao 1 ban
    return time/a + time/b >= n-1;
}
int main() {
    cin>>n>>a>>b;
    ll l = 0, r = 1ll*n*min(a,b),res=0;
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
