#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll  long long 
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define FORR(i, a, b) for(int i=a; i>b; i--)
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll> 

/*
Với vector V bạn có thể dùng hàm max_element để tìm phần tử lớn nhất, min_element để tìm phần tử nhỏ nhất, accumulate để tính tổng. Cú pháp (Đối với mảng các bạn dùng (a, a + n)) :

- cout << *min_element(V.begin(), V.end());
- cout << *max_element(V.begin(), V.end());
- cout << accumulate(V.begin(), V.end(), 0);

Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector.

Constraints

1<=N<=1000. Các phần tử của vector là số nguyên 32bit.

Output Format

Dòng 1 in ra phần tử nhỏ nhất, dòng 2 in ra phần tử lớn nhất, dòng 3 in ra tổng các phần tử.

Sample Input 0

10
2 2 2 7 6 6 6 9 5 7 

Sample Output 0

2
9
52


*/

int main(){
    int n; cin>>n;
    vi vt(n);
    for(int i=0; i<n; i++){
        cin>>vt[i];
    }
    cout<<*min_element(vt.begin(), vt.end())<<endl;
    cout<<*max_element(vt.begin(), vt.end())<<endl;
    cout<<accumulate(vt.begin(), vt.end(), 0);

}   