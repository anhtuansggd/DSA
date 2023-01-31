#include <bits/stdc++.h>
using namespace std;

/*
Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) * (2n + 1) / 6

Input Format

Số nguyên dương n.

Constraints

0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format

In ra kết quả của S(n)

Sample Input 0

53

Sample Output 0

51039


*/

int sum2(int n){
    if(n==1){
        return n;
    }
    else
        return pow(n,2) + sum2(n-1);
}

int main() {
    int n; cin>>n;
    cout<<sum2(n);

    
    return 0;
}