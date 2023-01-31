#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần, sau đó sắp xếp các phần tử theo thứ tự giảm dần.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format

Dòng đầu tiên in ra các phần tử trong mảng theo thứ tự tăng dần. Dòng thứ 2 in ra các phần tử trong mảng theo thứ tự giảm dần.

Sample Input 0

5
1 4 2 5 3

Sample Output 0

1 2 3 4 5
5 4 3 2 1



*/

int partition(int a[], int l, int r){
    int pivot = a[r];
    int i=l-1;
    for(int j=l; j<r; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

void quickSort(int a[], int l, int r){
    if(l<r){
        int q = partition(a, l, r);
        quickSort(a, l, q-1);
        quickSort(a, q+1, r);
    }else{return;}
}
int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    quickSort(a, 0, n-1);
    for(int x:a){cout<<x<<' ';}
    cout<<endl;
    for(int i=n-1; i>=0; i--){
        cout<<a[i]<<' ';
    }
}
