#include <bits/stdc++.h>
using namespace std;

/*
Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = [(n * (n + 1) / 2)]^2

Input Format

Số nguyên dương n.

Constraints

0≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format

In ra kết quả của S(n)

Sample Input 0

435

Sample Output 0

8992728900


*/

long long sum3(int n){
    if(n==1){
        return n;
    }
    else
        return pow(n,3)*1ll + sum3(n-1);
}

int main() {
    int n; cin>>n;
    cout<<sum3(n);

    
    return 0;
}