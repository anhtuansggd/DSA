#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

Gợi ý : Sử dụng binary_search, đối với mỗi phần tử a[i] đếm số lượng phần tử trong mảng (đã sắp xếp) > k - a[i] bằng cách tìm vị trí đầu tiên của phần tử > k - a[i], từ vị trí này tới cuối dãy sẽ đều là các phần tử > k - a[i]

Input Format

Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

Constraints

2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

Output Format

In ra số lượng cặp số có tổng lớn hơn k

Sample Input 0

4 5
2 3 4 5

Sample Output 0

5


*/

int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a,a+n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        auto it = upper_bound(a+i+1,a+n,k-a[i]);
        sum += n - (it-a);
    }
    cout<<sum;




    
}
