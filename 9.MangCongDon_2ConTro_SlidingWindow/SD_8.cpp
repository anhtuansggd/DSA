#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy xác định xem trong mảng có tồn tại 2 phần tử A[i], A[j] với i khác j sao cho A[i] = A[j] và abs(i - j) <= K hay không. Nếu con in ra YES, ngược lại in ra NO. Bài này các bạn có thể sử dụng sort hoặc sliding window

Input Format

    Dòng 1 gồm N và K

    Dòng 2 gồm N số trong mảng A[]

Constraints

    1<=K<=N<=10^6

    1<=A[i]<=10^6

Output Format

In ra đáp án của bài toán

Sample Input 0

5 5
9 10 7 8 4 

Sample Output 0

NO

Sample Input 1

13 7
2 8 6 8 1 3 7 8 5 6 3 9 4 

Sample Output 1

YES


*/


int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    int l=0;
    for(int r=1; r<n; r++){
        while(l<r){
            if(a[r]==a[l]){
                if(abs(r-l)<=k)    {
                    cout<<"YES"; return 0;
                }
            }
            l++;
        }
        l=0;
    }
    cout<<"NO";
    


}
