#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho mảng A[] gồm N phần tử và số X. Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X. Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

Input Format

Dòng thứ nhất là cặp số N, X; Dòng tiếp theo là N số A[i] là các phần tử của mảng A[].

Constraints

1≤ N ≤10^5; 1≤ X, A[i] ≤10^5.

Output Format

In ra 1 nếu tìm thấy một cặp số có hiệu bằng X, ngược lại in ra -1.

Sample Input 0

5 3
1 1 2 3 5

Sample Output 0

1


*/
int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x:a){ cin>>x;}
    sort(a, a+n);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(binary_search(a, a+n, a[i] + k)){
            cout<<"1"; return 0;
        }
    }
    cout<<"-1";
    return 0;
    

}