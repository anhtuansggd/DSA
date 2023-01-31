#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;
/*
Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tổng chữ số tăng dần, nếu 2 số có cùng tổng chữ số, thì số nào nhỏ hơn sẽ được in trước.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; 0<=A[i]<=10^9

Output Format

In ra các phần tử trong mảng sau khi sắp xếp

Sample Input 0

5
999976710 999982875 999974431 999984407 999972533 

Sample Output 0

999974431 999972533 999976710 999984407 999982875 


*/
int tong(int a){
    int sum = 0;
    while(a){
        sum += a%10;
        a /= 10;
    }
    return sum;
}

int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a, a+n, [](int a, int b)->bool{
        if(tong(a) != tong(b)){
            return tong(a) < tong(b);
        }else{ return a<b; }
    });
    for(int x:a){cout<<x<<' ';}
}
