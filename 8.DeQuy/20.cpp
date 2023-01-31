#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho số nguyên dương N. Bạn được thực hiện 3 thao tác sau đây: 1. Lấy N chia cho 2 nếu N chia hết cho 2. 2. Lấy N chia hết cho 3 nếu N chia hết cho 3. 3. Giảm N đi 1 đơn vị. Hãy đếm số thao tác ít nhất để biến đổi N về 1.

Input Format

Số nguyên dương N.

Constraints

1≤n≤50

Output Format

In ra số thao tác tối thiểu cần thực hiện.

Sample Input 0

38

Sample Output 0

5

Explanation 0

Giải thích test : 1. N = N / 2 = 19 2. N = N - 1 = 18 3. N = N / 3 = 6 4. N = N / 2 = 3 5. N = N / 3 = 1
*/

ll demThaoTac(ll n){

    if(n==1){
        return 0;
    }
    int t1 = 1e9, t2 = 1e9, t3 = 1e9; //if any branch smaller than 1e9, branch 1e9 will be skipped
    if(n%2==0){
        t1 = 1 + demThaoTac(n/2);
    }
    if(n%3==0){
        t2 = 1 + demThaoTac(n/3);
    }
    if(n>1){
        t3 = 1 + demThaoTac(n-1);
    }
    return min({t1,t2,t3});
}




int main() {
    ll n; cin>>n;
    cout<<demThaoTac(n);
    

    
    return 0;
}