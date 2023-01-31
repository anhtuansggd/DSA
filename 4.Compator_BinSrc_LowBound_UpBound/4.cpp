#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N điểm trong hệ tọa độ Oxy, hãy sắp xếp các điểm này theo khoảng cách về gốc tọa độ tăng dần, nếu 2 điểm có cùng khoảng cách tới gốc tọa độ thì in ra theo hoành độ tăng dần, nếu tiếp tục 2 điểm này có cùng hoành độ thì in ra theo thứ tự tung độ tăng dần.

Input Format

    Dòng đầu tiên là N : số lượng điểm

    N dòng tiếp theo mỗi dòng là 2 số nguyên x, y tương ứng với hoành độ và tung độ

Constraints

    1<=N<=10^5;
    -1000<=x,y<=1000;

Output Format

In ra các điểm sau khi sắp xếp

Sample Input 0

13
-42 -76
47 43
12 7
-62 31
7 64
42 -92
-89 60
45 41
3 54
-41 40
20 -24
88 42
0 12

Sample Output 0

0 12
12 7
20 -24
3 54
-41 40
45 41
47 43
7 64
-62 31
-42 -76
88 42
42 -92
-89 60


*/

bool cmp(pair<int, int> p1, pair<int, int> p2){
    double d1 = sqrt( p1.first*p1.first + p1.second*p1.second );
    double d2 = sqrt( p2.first*p2.first + p2.second*p2.second );
    if(d1!=d2){
        return d1 < d2;
    }else{
        if(p1.first != p2.first){
            return p1.first < p2.first;
        }else{
            return p1.second < p2.second;
        }
    }
}
int main() {
    int n; cin>>n;
    vector<pair<int, int>> vt;
    for(int i=0; i<n; i++){
        int a, b; cin>>a>>b;
        vt.push_back({a,b});
    }
    sort(vt.begin(), vt.end(), cmp);
    for(auto it:vt){
        cout<<it.first<<' '<<it.second<<endl;
    }

    
}
