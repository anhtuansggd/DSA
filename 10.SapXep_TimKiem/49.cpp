#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Có n sợi dây, bạn cần cắt k đoạn dây có cùng chiều dài từ chúng. Tìm chiều dài tối đa của các mảnh dây bạn có thể nhận được.

Input Format

Dòng đầu tiên chứa hai số nguyên n và k. N dòng tiếp theo mỗi dòng ghi một số, chiều dài của sợi dây là a[i].

Constraints

(1≤n, k≤10000); (1≤ai≤10^7);

Output Format

In ra chiều dài của mảnh dây dài nhất mà bạn có thể cắt với 6 số sau dấu phẩy.

Sample Input 0

4 11
802 743 457 539

Sample Output 0

200.500000


*/

int n,k, a[10000007];
//xac dinh ham monotonic
bool check(double len){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += (int)(a[i]/len);
    }
    return sum >= k;
    
}
int main() {
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    double l = 0, r = 4e18,res;    
    for(int i=1; i<=100; i++){
        double m=(l+r)/2;
        if(check(m)){
            res = m;
            l = m;
        }else{
            r = m;
        }
    }
    cout<<fixed<<setprecision(6)<<res;

}
