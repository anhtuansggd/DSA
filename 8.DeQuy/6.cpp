#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy.

Input Format

Số nguyên dương n.

Constraints

1≤n≤15;

Output Format

In ra số Fibonacci thứ n.

Sample Input 0

1

Sample Output 0

0


*/

int fibo(int n){
    if(n==1 || n==2){
        return n-1;
    }else{
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int n; cin>>n;
    cout<<fibo(n);
    
    return 0;
}