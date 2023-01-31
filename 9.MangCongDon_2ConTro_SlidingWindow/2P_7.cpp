#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N số nguyên và số nguyên S, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng ít nhất bằng S

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

7 20
2 6 4 3 6 8 9

Sample Output 0

9


*/

int main() {
    int n,s; cin>>n>>s; int a[n];
    for(int &x:a){cin>>x;}
    int l=0;
    ll sum = 0,cnt=0;
    for(int r=0; r<n; r++){
        sum += a[r];
        while(sum >= s){
            cnt += n-r;
            sum -= a[l]; 
            l++;
        }
    }
    cout<<cnt;
    
}
