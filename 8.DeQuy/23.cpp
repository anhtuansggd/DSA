#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải toàn số chẵn hay không?

Input Format

Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

Constraints

1≤n≤1000; 1≤A[i]≤10^6

Output Format

In ra YES nếu mảng toàn số chẵn, ngược lại in ra NO.

Sample Input 0

4
2 8 10 20012

Sample Output 0

YES


*/

void chan(int Arr[], int n){
    if(Arr[n-1]%2==0 && n>0){
        chan(Arr, n-1);
    }else if(n==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main() {
    int n; cin>>n;
    int Arr[n];
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    chan(Arr, n);
    
    return 0;
}