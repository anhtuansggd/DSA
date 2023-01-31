#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Cho mảng số nguyên A[] có N phần tử, hãy tìm số xuất hiện nhiều nhất trong mảng.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^5; -10^9<=A[i]<=10^9

Output Format

In ra số có số lần xuất hiện nhiều nhất và tần suất tương ứng, nếu có nhiều số có cùng số lần xuất hiện thì in ra số nhỏ nhất.

Sample Input 0

5
1 2 2 1 3

Sample Output 0

1 2


*/

int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a, a+n);
    int cnt=1, cnt_res=1, ans = a[0];
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]){
            cnt++;
        }else{
            if(cnt > cnt_res){
                cnt_res = cnt;
                ans = a[i-1];
            }
            cnt = 1;
        }
    }
    if(cnt > cnt_res){
        cnt_res = cnt;
        ans = a[n-1];
    }
    cout<<ans<<' '<<cnt_res;
    
}

