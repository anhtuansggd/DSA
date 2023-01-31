#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm số lượng phần tử lớn nhất trong mảng sao cho độ chênh lệch giữa 2 phần tử bất kì trong tập hợp bạn chọn ra không vượt quá K.

Input Format

Dòng thứ nhất gồm N và K; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; 0<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán

Sample Input 0

5 3
1 2 3 3 2 

Sample Output 0

5


*/

int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a, a+n);
    int l=0,ans=1;
    for(int r=1; r<n; r++){
        if(a[r]-a[l]>k){
            l++;
        }
        ans = max(ans,r-l+1);
    }
    cout<<ans;
}