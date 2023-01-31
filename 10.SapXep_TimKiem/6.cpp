#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^3; 0<=A[i]<=10^9

Output Format

In ra các bước của thuật toán sắp xếp chọn

Sample Input 0

4
5 7 3 2

Sample Output 0

Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7


*/

void selectionSort(int Arr[], int n){
    int index = 1;
    for(int i=0; i<n-1; i++){
        int min_pos = i;
        for(int j = i+1; j<n; j++){
            if(Arr[j] < Arr[min_pos]){
                min_pos = j;
            }
        }
        swap(Arr[i], Arr[min_pos]);
        cout<<"Buoc "<<index<<": "; ++index;
        for(int k = 0; k<n; k++){
            cout<<Arr[k]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n; cin>>n;
    int Arr[n];
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    selectionSort(Arr, n);
    

    
    
    return 0;
}