#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*

Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm dãy con liên tiếp dài nhất có tổng chia hết cho K.

Input Format

Dòng thứ nhất gồm N K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

Output Format

In ra dãy con dài nhất hoặc in ra -1 nếu không tồn tại dãy con chia hết cho K.

Sample Input 0

12 2
-4 1 4 -4 4 4 -3 4 2 -4 2 4 

Sample Output 0

12



i sum ans
0 0 1
0 0 1
1 1 1
2 1 2
3 1 3
4 1 4
5 1 5
6 0 7
6 0 7
7 0 8
7 0 8
8 0 9
8 0 9
9 0 10
9 0 10
10 0 11
10 0 11
11 0 12
11 0 12
i=0, sum=0, (sum%2==0) ans=1, (mp.count(0%2)==0) mp[0]=0
i=1, sum=1, (mp.count(1%2)==0) mp[1] = 1
i=2, sum=1, (mp.count(1%2)) ans = 2
i=3, sum=1, (mp.count(1%2)) ans = 3
i=4, sum=1, (mp.count(1%2)) ans = 4
i=5, sum=1, (mp.count(1%2)) ans = 5
i=6, sum=0, (0%2==0) ans = 7, (mp.count(0%2)) ans = 7
i=7, sum=0, (0%2==0) ans = 8, (mp.count(0%2)) ans = 8
i=8, sum=0, (0%2==0) ans = 9, (mp.count(0%2)) ans = 9
i=9, sum=0, (0%2==0) ans = 10, (mp.count(0%2)) ans = 10
...

2 TH: 1.neu sum chia het cho k thi tu 0->i la day con can tim
      2.neu tim dc sum chia het cho k trong map thi tu vi tri
      sum chia het cho k trong map toi i cong 1 se la day con can tim
-> neu sum%k chua co thi luu lai vi tri

*/

int main() {
    int n, k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    map<ll, int> mp;
    ll sum = 0;
    int ans = -1;
    for(int i=0; i<n; i++){
        sum += a[i];
        //TH so am
        sum = (sum%k+k)%k;
        if(sum%k==0){
            ans = max(ans, i+1);
        }
        if(mp.count(sum%k)){
            ans = max(ans, i-mp[sum%k]);
        }
        if(mp.count(sum%k)==0){
            mp[sum%k]=i;
        }
    }
    cout<<ans;
}