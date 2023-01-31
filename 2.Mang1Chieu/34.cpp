#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;


/*
Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm khoảng cách lớn nhất giữa 2 chỉ số i, j sao cho trị tuyệt đối của hiệu A[i] - A[j] bằng K.

Input Format

Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

Output Format

In ra khoảng cách lớn nhất giữa i và j hoặc in ra -1 nếu không tồn tại cặp số như vậy.

Sample Input 0

14 2
0 1 3 0 4 0 0 3 3 -4 1 0 -4 3 

Sample Output 0

12

Sample Input 1

14 10
-2 3 1 -4 0 0 0 1 0 -4 3 3 -1 3 

Sample Output 1

-1





i=1, x1=a[1]-2=-1, x2=3, mp[1] = 1
i=2, x1=1, x2=5, mp.count(1)>0 -> max_dist = 1, mp[3] = 2
i=3, x1=-2, x2=2, mp[0] = 3;
i=4, x1=2, x2=6, mp[4] = 4;
i=5, x1=-2, x2=2 -> xuat hien roi nen ko cap nhat vi tri nua
i=6, x1=-2, x2=2
i=7, x1=1, x2=5, mp.count(1)>0 -> max_dist = 6
i=8, x1=1, x2=5, mp.count(1)>0 -> max_dist = 7
i=9, x1=-6, x2=-2, mp[-4] = 9
i=10, x1=-1, x2=3, mp.count(3) -> max_dist = 8
i=11, x1=-2, x2=2
i=12, x1=-6, x2=-2
i=13, x1=1, x2=5, mp.count(1)>0 -> max_dist = 12


*/
int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    map<int, int> mp;
    int max_dist = -1;
    mp[a[0]] = 0;
    for(int i=1; i<n; i++){
        int x1=a[i]-k, x2=a[i]+k;
        if(mp.count(x1)>0){
            max_dist = max(max_dist, i-mp[x1]);
            //cout<<1<<' '<<i<<' '<<x1<<' '<<max_dist<<endl;
        }
        if(mp.count(x2)>0){
            max_dist = max(max_dist, i-mp[x2]);
            //cout<<2<<' '<<i<<' '<<x2<<' '<<max_dist<<endl;
        }
        //cap nhat vi tri neu no la so dau tien xuat hien
        if(mp.count(a[i])==0){mp[a[i]] = i;}
    }
    cout<<max_dist;
    
    


} 