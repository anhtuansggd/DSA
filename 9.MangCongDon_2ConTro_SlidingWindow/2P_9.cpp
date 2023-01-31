#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà độ chênh lệch giữa phần tử lớn nhất và phần tử nhỏ nhất trong mảng con đó không vượt quá K

Input Format

    Dòng đầu tiên là N và K

    Dòng thứ 2 là N số trong mảng A[]

Constraints

    1<=N<=10^5

    1<=A[i],K<=10^6

Output Format

In ra số lượng mảng con thỏa mãn đề bài

Sample Input 0

10 1
2 3 1 3 1 4 1 3 1 2 

Sample Output 0

12


*/

int main() {
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x:a){cin>>x;}
    multiset<int> st;
    int l=0;
    ll res=0;
    for(int r=0; r<n; r++){
        st.insert(a[r]);
        while(st.size()>=1 && (*st.rbegin()-*st.begin()) > k){
            auto it = st.find(a[l]);
            st.erase(it);
            l++;
        }
        res += r-l+1;
    }
    cout<<res;
    
}
