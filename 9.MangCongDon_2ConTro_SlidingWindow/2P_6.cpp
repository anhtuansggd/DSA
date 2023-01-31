#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N số nguyên và số nguyên S, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng không vượt quá S.

Input Format

    Dòng đầu tiên là N và S

    Dòng thứ 2 là N số trong mảng A[]

Constraints

    1<=N<=10^6

    1<=A[i]<=10^6

    1<=S<=10^9

Output Format

In ra số lượng mảng con thỏa mãn

Sample Input 0

13 14
5 4 5 2 4 5 1 1 2 5 5 2 2 

Sample Output 0

47


*/
int main() {
    int n,s; cin>>n>>s;
    int a[n]; for(int &x:a){cin>>x;}
    int l=0,r=0;
    ll sum = 0,ans = 0;
    for(r=0; r<n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        ans += r-l+1;
    }
    cout<<ans;


    
}
