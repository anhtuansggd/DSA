#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i] và số Q là số cuối cùng ở dòng thứ 2. Q dòng tiếp theo mỗi dòng là 2 chỉ số l, r.

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N

Output Format

In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

Sample Input 0

5
1 2 3 4 5 1
1 3

Sample Output 0

6


*/


int main() {
    int n,q; cin>>n;
    int a[n]; ll sum[n]={0};
    for(int &x:a){cin>>x;}
    cin>>q; 
    sum[0] = a[0];
    for(int i=1; i<n; i++){
        sum[i] = sum[i-1] + a[i];
    }
    while(q--){
        int L, R; cin>>L>>R;
        L--; R--;
        if(L == 0){
            cout<<sum[R]<<endl;
        }else{
            cout<<sum[R]-sum[L-1]<<endl;
        }
    }
    


}