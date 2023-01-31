#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử, hãy tìm 2 chỉ số i, j khác nhau sao cho 0 <= i < j < N và trị tuyệt đối tổng của 2 phần tử A[i] và A[j] đạt giá trị lớn nhất.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

2<=N<=10^6;
-10^9<=A[i]<=10^9

Output Format

In ra đáp án của bài toán

Sample Input 0

5
-1 -2 -3 9 -5

Sample Output 0

8


*/

int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){cin>>x;}
    sort(a,a+n);
    cout<<max(abs(a[0])+abs(a[1]), a[n-2]+a[n-1]);
    
}