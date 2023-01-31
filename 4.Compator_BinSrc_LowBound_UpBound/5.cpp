#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho các điểm trong hệ tọa độ OXYZ, nhiệm vụ của bạn là sắp xếp các điểm này theo hoành độ tăng dần, nếu có cùng hoành độ thì sắp theo tung độ tăng dần, nếu có cùng tùng độ tiếp tục sắp xếp theo cao độ tăng dần. Sử dụng pair như sau để lưu các tọa độ này :

pair<int, pair<int, int>>

Input Format

    Dòng đầu tiên là N : số lượng điểm.

    N dòng tiếp theo mỗi dòng là 3 số nguyên x, y, z tương ứng với 1 điểm

Constraints

    1<=N<=10^5

    x, y, z là số nguyên dương không quá 1000

Output Format

In ra các điểm sau khi sắp xếp

Sample Input 0

12
37 4 54
37 25 75
88 46 30
40 40 90
87 99 80
73 76 49
20 95 25
52 3 8
65 79 56
88 65 87
51 50 12
87 29 44

Sample Output 0

20 95 25
37 4 54
37 25 75
40 40 90
51 50 12
52 3 8
65 79 56
73 76 49
87 29 44
87 99 80
88 46 30
88 65 87


*/

bool cmp(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2){
    if(p1.first != p2.first){
        return p1.first<p2.first;
    }else{
        if(p1.second.first != p2.second.first){
            return p1.second.first <= p2.second.first;
        }else return p1.second.second <= p2.second.second;
    }
}
int main() {
    int n; cin>>n;
    vector< pair< int, pair<int, int>> > vt;
    for(int i=0; i<n; i++){
        int a,b,c; cin>>a>>b>>c;
        vt.push_back({a,{b,c}});
    }
    sort(vt.begin(), vt.end(), cmp);
    for(auto it:vt){cout<<it.first<<' '<<it.second.first<<' '<<it.second.second<<endl;}

    
}
