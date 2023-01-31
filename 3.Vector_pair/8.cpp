#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

/*
Cho N điểm trong hệ tọa độ Oxyz, bạn hãy dùng vector

pair<pair<int, int>, int>>

để lưu tọa độ các điểm này. Sau đó duyệt vector và in ra tổng của tung độ, hoành độ, cao độ.

Input Format

Dòng 1 là N : số lượng điểm. N dòng tiếp theo mỗi dòng gồm 3 số là tung độ, hoành độ, cao độ.

Constraints

1<=N<=1000; Tọa độ là số nguyên có trị tuyệt đối không quá 100;

Output Format

In ra đáp án của bài toán

Sample Input 0

12
65 91 53
64 70 15
50 9 57
69 37 11
31 35 66
73 55 50
63 40 38
33 5 41
67 39 29
85 78 6
67 49 83
41 34 88

Sample Output 0

209 149 116 117 132 178 141 79 135 169 199 163 


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
    pair<pair<int, int>, int> pr;
    int n; cin>>n;
    while(n--){
        cin>>pr.first.first>>pr.first.second>>pr.second;
        int res = pr.first.first+pr.first.second+pr.second;
        cout<<res<<" ";
    }

}   