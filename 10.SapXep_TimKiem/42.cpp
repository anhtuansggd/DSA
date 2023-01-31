#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho một mảng gồm n số nguyên, nhiệm vụ của bạn là đếm số mảng con (dãy con các phần tử liên tiếp) có tổng bằng x.

Input Format

Dòng đầu tiên có hai số nguyên n và x: kích thước của mảng và tổng mục tiêu x. Dòng tiếp theo có n số nguyên a1, a2,…, an: các phần tử trong mảng

Constraints

1≤n≤2⋅10^5; -10^9≤x, ai≤10^9

Output Format

In một số nguyên: số lượng mảng con cần thiết.

Sample Input 0

5 7
2 4 1 2 7

Sample Output 0

3


*/
int main(){
    int n,k; cin>>n>>k;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    ll cnt = 0;
    ll F[n+1]={0};
    map<ll, int> mp;
    mp[0]=1;
    for(int i=1; i<=n; i++){
        F[i] = F[i-1] + a[i];
        cnt += mp[ F[i]-k ];
        mp[F[i]]++;
    }
    cout<<cnt;    

}    