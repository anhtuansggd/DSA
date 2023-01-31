#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho dãy số A[] gồm có N phần tử, bạn hãy liệt kê các giá trị xuất hiện trong dãy theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê một lần.

Input Format

Dòng đầu tiên là số nguyên N. Dòng thứ 2 gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9;

Output Format

In ra các giá trị xuất hiện trong mảng theo thứ tự xuất hiện.

Sample Input 0

8
1 2 3 2 1 3 4 8

Sample Output 0

1 2 3 4 8


*/
int main() {
    int n,k; cin>>n;
    set<int> s;
    while(n--){
        cin>>k;
        if(s.count(k)==0){
            cout<<k<<" ";
            s.insert(k);
        }
    }
}