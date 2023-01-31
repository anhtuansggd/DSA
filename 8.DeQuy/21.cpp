#include <bits/stdc++.h>
using namespace std;


/*
Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có đối xứng hay không bằng cách sử dụng hàm đệ quy.

Input Format

Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

Constraints

1≤n≤1000; 1≤A[i]≤10^6

Output Format

In ra YES nếu mảng A là mảng đối xứng, ngược lại in ra NO.

Sample Input 0

5
1 2 3 2 1

Sample Output 0

YES


*/

using ll = long long;

bool mangDoiXung(int Arr[], int L, int R){
    if(L > R){
        return true;
    }
    if(Arr[L] != Arr[R]){ 
        return false;
    }else{
        return mangDoiXung(Arr, L+1, R-1);
    }
    
}




int main() {
    int n; cin>>n; 
    int Arr[n];
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    int L = 0, R = n-1;
    if(mangDoiXung(Arr, L, R)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    
    return 0;
}