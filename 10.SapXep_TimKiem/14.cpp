#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Vào một buổi sáng anh Bo sắp một đàn bò gồm n con bò để vắt sữa. Anh dự kiến là vào sáng hôm đó, con bò thứ i có khả năng sẽ vắt được ai lít sữa. Tuy nhiên đàn bò của anh có đặc tính là cứ mỗi lần vắt sữa một con, những con còn lại trông thấy sợ quá nên sẽ bị giảm sản lượng mỗi con 01 lít sữa. Nếu vắt sữa con bò thứ nhất, n-1 con còn lại bị giảm sản lượng. Sau đó vắt sữa con bò thứ hai thì n-2 con còn lại bị giảm sản lượng.... Bạn hãy giúp anh Bo tính xem thứ tự vắt sữa bò như thế nào để số lượng sữa vắt được là nhiều nhất nhé.

Input Format

    Dòng thứ nhất là số nguyên là số lượng con bò.
    Dòng thứ hai gồm n số nguyên a1, a2,..., an là sản lượng sữa của các con bò.

Constraints

1<=n<=10^5; 1<=a[i]<=10^6

Output Format

Số nguyên xác định số lít sữa nhiều nhất mà anh Bo có thể vắt được.

Sample Input 0

4
4 4 4 4

Sample Output 0

10


*/
int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a, a+n, greater<int>());
    ll sum = a[0];
    for(int i=1; i<n; i++){
        a[i] -= i;
        if(a[i]>=1){
            sum += a[i];
        }else break;
    }
    cout<<sum;
}

