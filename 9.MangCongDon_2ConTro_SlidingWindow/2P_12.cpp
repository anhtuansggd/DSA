#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử A[i], A[j], A[k], A[l] với i, j, k, l khác nhau và A[i] + A[j] + A[k] + A[l] = K hay không ?

Input Format

    Dòng đầu tiên là N và K

    Dòng thứ 2 là N số trong mảng A[]

Constraints

    1<=N<=1000

    1<=A[i],K<=10^9

Output Format

In ra YES nếu tồn tại, ngược lại in ra NO

Sample Input 0

6 28
3 6 7 9 1 6 

Sample Output 0

YES


*/

int main() {
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x:a){cin>>x;}
    sort(a,a+n);
    for(int i=0; i<n-3; i++){
        for(int j=i+1; j<n-2; j++){
            int l=j+1, r=n-1;
            while(l<r){
                if(a[l]+a[r]==k-a[i]-a[j]){
                    cout<<"YES"; return 0;
                }else if(a[l]+a[r]>k-a[i]-a[j]){
                    r--;
                }else{
                    l++;
                }
            }
        }
    }
    cout<<"NO";

    
}
