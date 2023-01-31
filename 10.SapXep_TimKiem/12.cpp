#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Trong lớp học có n bạn nam và m bạn nữ. Các bạn nam có chiều cao là a1, a2, ..., an. Các bạn nữ có chiều cao là b1, b2, ..., bm. Nhân dịp lễ tổng kết cuối năm, cả lớp dự định tổ chức buổi khiêu vũ nhưng có điều kiện là trong một đôi khiêu vũ bất kỳ, bạn nam phải cao hơn bạn nữ. Và mỗi bạn không tham gia quá 1 đôi khiêu vũ. Hãy tính số lượng cặp đôi nhiều nhất thỏa mãn yêu cầu trên.

Input Format

Input: gồm 3 dòng - Dòng thứ nhất là hai số n, m mỗi số cách nhau một khoảng trắng. - Dòng thứ hai gồm n số nguyên a1, a2, ..., an là chiều cao các bạn nam. - Dòng thứ ba gồm m số nguyên b1, b2, ..., bm là chiều cao các bạn nữ.

Constraints

1<=n,m<=10^5; 1<=a[i],b[i]<=10^6;

Output Format

In ra số lượng cặp khiêu vũ nhiều nhất ghép được.

Sample Input 0

5 5
2668 2956 20933 21199 24224 
11521 13084 19573 25628 28958 

Sample Output 0

3


*/

int main() {
    int n,m; cin>>n>>m;
    int a[n], b[m];
    for(int &x:a){cin>>x;}; sort(a, a+n);
    for(int &x:b){cin>>x;}; sort(b, b+m);
    int i=0, j=0, cnt = 0;
    while(i<n && j<m){
        if(a[i] > b[j]){
            cnt++; i++; j++;
        }else i++;
        
    }
    cout<<cnt;
    
}

