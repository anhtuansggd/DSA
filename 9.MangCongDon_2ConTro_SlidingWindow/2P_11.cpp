#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử A[i], A[j], A[k] với i, j, k khác nhau và A[i] + A[j] + A[k] = K hay không ?

Input Format

    Dòng đầu tiên là N và K

    Dòng thứ 2 là N số trong mảng A[]

Constraints

    1<=N<=10^5

    1<=A[i],K<=10^9

Output Format

In ra YES nếu tồn tại, ngược lại in ra NO

Sample Input 0

7 5
7 2 5 10 10 8 8 

Sample Output 0

NO

Sample Input 1

7 13
1 7 6 3 3 1 8 

Sample Output 1

YES


*/

int main() {
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x:a){cin>>x;}
    sort(a,a+n);
    for(int i=0; i<n-2; i++){
        int l=i+1, r=n-1;
        while(l<r){
            if(a[l] + a[r] == k-a[i]){
                cout<<"YES"; return 0;
            }else if(a[l] + a[r] > k-a[i]){
                r--;
            }else if(a[l] + a[r] < k-a[i]){
                l++;
            }
        }
    }
    cout<<"NO";

    
}
