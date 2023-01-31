#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm hợp của 2 mảng này và in theo thứ tự từ lớn về nhỏ. Cú pháp duyệt ngược của set như sau :

for(auto it = se.rbegin(); it != se.rend(); ++it){
        cout << *it << ' ';
    }

Input Format

    Dòng 1 gồm N và M

    Dòng 2 gồm N số trong mảng A[]

    Dòng 3 gồm M số trong mảng B[]

Constraints

    1<=N,M<=10^5

    -10^9<=A[i],B[i]<=10^9

Output Format

In ra tập hợp của 2 mảng theo thứ tự giảm dần

Sample Input 0

9 6
7 9 2 0 0 5 6 4 7 
9 7 3 4 5 7 

Sample Output 0

9 7 6 5 4 3 2 0 


*/

int main() {
    int n,m; cin>>n>>m;
    int a[n], b[m]; 
    set<int> st;
    for(int &x:a){cin>>x; st.insert(x);}
    for(int &x:b){cin>>x; st.insert(x);}
    for(auto it = st.rbegin(); it!=st.rend(); it++){
        cout<<*it<<' ';
    }
}
