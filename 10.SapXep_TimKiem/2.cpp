#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự giá trị tuyệt đối tăng dần. Nếu có 2 số có cùng giá trị tuyệt đối thì số nào xuất hiện trước sẽ được in ra trước

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format

In ra các phần tử trong mảng sau khi sắp xếp theo thứ tự tăng dần

Sample Input 0

5
1 -3 2 -5 4

Sample Output 0

1 2 -3 4 -5


*/
bool cmp(int a, int b){
    if(abs(a) != abs(b)){
        return abs(a) < abs(b);
    }
    return 0;
}
int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){cin>>x;}
    stable_sort(a,a+n,cmp);
    for(int &x:a){cout<<x<<' ';}

    
}
