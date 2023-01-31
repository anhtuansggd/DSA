#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

/*
Cho N điểm trong hệ tọa độ Oxy, bạn hãy dùng vector

pair<int, int>

để lưu tọa độ các điểm này. Sau đó duyệt vector và tính khoảng cách từ các điểm này về gốc tọa độ và lưu vào 1 vector sau đó in ra các phần tử trong vector khoảng cách này lấy 2 số sau dấu phẩy.

Input Format

Dòng 1 là N : số lượng điểm. N dòng tiếp theo mỗi dòng gồm 2 số là tung độ và hoành độ.

Constraints

1<=N<=1000; Tọa độ là số nguyên có trị tuyệt đối không quá 100;

Output Format

In ra đáp án của bài toán.

Sample Input 0

13
5 27
69 84
92 51
12 70
26 70
76 47
36 94
55 2
26 20
85 97
17 31
33 88
10 75

Sample Output 0

27.46 108.71 105.19 71.02 74.67 89.36 100.66 55.04 32.80 128.97 35.36 93.98 75.66 

Submissions: 204

Max Score:

100

Difficulty:

Easy

Rate This Challenge:
More

*/

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


int main(){
    vector<pair<int, int>> vt;
    int n; cin>>n;
    while(n--){
        int x,y; cin>>x>>y;
        vt.push_back({x,y});
    }
    for(int i=0; i<vt.size(); i++){
        double x = sqrt(vt[i].first*vt[i].first + vt[i].second*vt[i].second);
        cout<<fixed<<setprecision(2)<<x<<" ";
    }
}   