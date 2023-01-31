#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;
/*
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự giảm dần. Có Q truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là một số nguyên dương X.

Constraints

1<=N<=10^6; 1<=Q<=10^3; 0<=A[i],X<=10^9

Output Format

Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, ngược lại in ra NO.

Sample Input 0

5
5 4 3 2 1
2
2
8

Sample Output 0

YES
NO


*/
bool bS(int a[], int n, int x){
    int l=0, r=n-1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m]==x){
            return true;
        }else if(a[m]>x){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    return false;
}

int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    int q,tmp; cin>>q;
    while(q--){
        cin>>tmp;
        if(bS(a,n,tmp)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}
