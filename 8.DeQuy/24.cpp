#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải là mảng tăng dần hay không, mảng tăng dần được định nghĩa là mảng mà phần tử hiện tại luôn lớn hơn các phần tử đứng trước nó.

Input Format

Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

Constraints

1≤n≤1000; 1≤A[i]≤10^6

Output Format

In ra YES nếu mảng toàn là mảng tăng dần, ngược lại in ra NO.

Sample Input 0

5
1 1 8 9 20

Sample Output 0

NO

Sample Input 1

5
1 1 1 1 1

Sample Output 1

NO


*/

void tangDan(int Arr[], int n, int k){
    if(k<n-1 && Arr[k] < Arr[k+1]){
        k++;
        tangDan(Arr, n, k);
    }else if(k==n-1){
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
    int k = 0;
    tangDan(Arr, n, k);
    
    return 0;
}