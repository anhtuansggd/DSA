#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong 2 mảng đã được sắp xếp theo thứ tự tăng dần. Hãy tìm mảng giao và mảng hợp của 2 mảng. Độ phức tạp mong muốn O(n+m)

Input Format

Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

Constraints

1≤n,m≤10^7; -10^7≤ai≤10^7

Output Format

Dòng đầu tiên in ra mảng hợp của 2 mảng Dòng thứ 2 in ra mảng giao của 2 mảng

Sample Input 0

4 5
1 2 3 4
2 3 5 6 7

Sample Output 0

1 2 3 4 5 6 7
2 3


*/
int main() {
    int n,m; cin>>n>>m;
    int a[n], b[m];
    for(int &x:a){cin>>x;}
    for(int &x:b){cin>>x;}
    set<int> giao,hop;
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            giao.insert(a[i]); 
            hop.insert(a[i]);
            i++; j++;
        }else if(a[i] < b[j]){
            hop.insert(a[i]); i++;
        }else if(a[i] > b[j]){
            hop.insert(b[j]); j++;
        }
    }
    while(i<n){
        hop.insert(a[i]); i++;
    }
    while(j<m){
        hop.insert(b[j]); j++;
    }
    for(int x:hop){cout<<x<<' ';}
    cout<<endl;
    for(int x:giao){cout<<x<<' ';}




   
}