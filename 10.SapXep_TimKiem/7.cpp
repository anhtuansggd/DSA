#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chèn

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^3; 0<=A[i]<=10^9

Output Format

In ra các bước của thuật toán sắp xếp chèn

Sample Input 0

7
56 73 15 64 86 61 50 

Sample Output 0

Buoc 1: 56 73 15 64 86 61 50 
Buoc 2: 15 56 73 64 86 61 50 
Buoc 3: 15 56 64 73 86 61 50 
Buoc 4: 15 56 64 73 86 61 50 
Buoc 5: 15 56 61 64 73 86 50 
Buoc 6: 15 50 56 61 64 73 86 


*/

void insertionSort(int Arr[], int n){
    int index = 1;
    for(int i = 1; i<n; i++){
        int pos = i-1, x = Arr[i];
        while(pos >=0 && Arr[pos]>x){
            Arr[pos + 1] = Arr[pos];
            --pos;
        }
        Arr[pos+1] = x;
        cout<<"Buoc "<<index<<": "; ++index;
        for(int i = 0; i<n; i++){
            cout<<Arr[i]<<" ";
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
    insertionSort(Arr, n);
    
    

    
    
    return 0;
}