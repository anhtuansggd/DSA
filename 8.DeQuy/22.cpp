#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy.

Input Format

Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

Constraints

1≤n≤1000; 1≤A[i]≤10^6

Output Format

Dòng đầu tiên in ra các phần tử trong mảng theo chiều từ trái qua phải. Dòng thứ 2 in ra các phần tử trong mảng theo chiều từ phải qua trái.

Sample Input 0

5
1 2 3 4 5

Sample Output 0

1 2 3 4 5
5 4 3 2 1


*/

void L2R(int Arr[], int n,int k){
    cout<<Arr[k]<<" "; k++;
    if(k < n){
    L2R(Arr, n,k);
    }
}

void R2L(int Arr[], int n){ 
    cout<<Arr[n-1]<<" ";
    if(n-1 > 0){
    R2L(Arr, n-1);
    } 
}

int main() {
    int n; cin>>n;
    int Arr[n];
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    int k = 0;
    L2R(Arr, n, k);   
    cout<<endl;
    R2L(Arr, n);
    
    return 0;
}