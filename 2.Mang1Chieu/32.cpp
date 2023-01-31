#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là in ra số lớn nhất và nhỏ nhất của mọi mảng con cỡ K của mảng A[]

Input Format

Dòng đầu tiên là N và K; Dòng thứ 2 gồm N phần tử A[i]

Constraints

1<=K<=N<=10^6; 0<=A[i]<=10^9

Output Format

In ra số lớn nhất và nhỏ nhất của mọi mảng con trên từng dòng.

Sample Input 0

8 2
8 5 8 6 7 6 5 8 

Sample Output 0

5 8
5 8
6 8
6 7
6 7
5 6
5 8


*/
int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    multiset<int> ms;
    for(int i=0; i<k; i++){
        ms.insert(a[i]);
    }
    cout<<*ms.begin()<<' '<<*ms.rbegin()<<endl; 
    for(int i=1; i<=n-k; i++){
        //delete a[i-1] add to a[i+k-1]
        auto it = ms.find(a[i-1]);
        ms.erase(it);
        ms.insert(a[i+k-1]);
        cout<<*ms.begin()<<' '<<*ms.rbegin()<<endl;
    }

    
}