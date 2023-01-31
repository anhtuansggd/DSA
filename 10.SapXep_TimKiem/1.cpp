#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;
/*
Cho mảng số nguyên gồm N phần tử. Hãy đếm xem mảng có bao nhiêu phần tử riêng biệt

Input Format

Dòng đầu tiên là N Dòng thứ 2 là các phần tử trong mảng a1, a2, ... aN

Constraints

1≤n≤2.10^5; 1≤ai≤10^9

Output Format

In ra số lượng phần tử riêng biệt trong mảng.

Sample Input 0

10
2 2 2 1 3 2 5 1 4 2

Sample Output 0

5

Explanation 0

5 phần tử khác nhau trong mảng là 1, 2, 3, 4, 5
*/
void merge(int a[], int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    int x1[n1], x2[n2];
    for(int i=l; i<=m; i++){
        x1[i-l] = a[i];
    }
    for(int i=m+1; i<=r; i++){
        x2[i-m-1] = a[i];
    }
    int i=0, j=0, cnt = l;
    while(i<n1 && j<n2){
        if(x1[i] <= x2[j]){
            a[cnt] = x1[i]; i++; cnt++;
        }else{
            a[cnt] = x2[j]; j++; cnt++;
        }
    }
    while(i<n1){
        a[cnt] = x1[i]; i++; cnt++;
    }
    while(i<n1){
        a[cnt] = x2[j]; j++; cnt++;
    }
}

void mergeSort(int a[], int l, int r){
    if(l < r){
        int m = (l+r)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){ cin>>x; }
    mergeSort(a, 0, n-1);
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(a[i] != a[i+1]){
            cnt++;
        }
    }
    cout<<cnt+1;
    
}
