#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là kiểm tra xem có tồn tại mảng con có tổng bằng 0 hay không, nếu tồn tại mảng con như vậy bạn in ra 1. Nếu không tồn tại dãy con có tổng bằng 0 thì in ra -1.

Input Format

Dòng thứ nhất gồm N; Dòng thứ 2 gồm các phần tử trong mảng A[];

Constraints

1<=K<=N<=10^6; -10^6<=A[i]<=10^6;

Output Format

In ra đáp án của bài toán.

Sample Input 0

12
-2 0 3 -3 4 3 -2 1 1 0 3 4 

Sample Output 0

1


*/
int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    ll sum = 0;
    map<ll, int> mp;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sum==0){
            cout<<"1\n";
            return 0;
        }
        if(i!=0 && mp.count(sum)){
            cout<<1;
            return 0;
        }
        mp[sum] = i;
    }
    cout<<-1;
}