#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Bạn được cho biết thời gian đến và đi của n khách hàng trong một nhà hàng. Số lượng khách hàng có mặt tại cửa hàng ở 1 thời điểm nhiều nhất là bao nhiêu?

Input Format

Dòng nhập đầu tiên có số nguyên n: số lượng khách hàng. Sau đó, có n dòng mô tả khách hàng. Mỗi dòng có hai số nguyên a và b: thời gian đến và đi của một khách hàng. Bạn có thể cho rằng tất cả thời gian đến và đi là khác nhau.

Constraints

1≤ n, m ≤2.10^5; 1≤ a, b ≤10^9

Output Format

In một số nguyên: số lượng khách hàng tối đa.

Sample Input 0

3
5 8
2 4
3 9

Sample Output 0

2

Explanation 0

Giải thích test : người khách (2,4) và (3,9) cùng có mặt tại cửa hàng, hoặc người khách (3,9) và (5,8) cùng có mặt tại cửa hàng

Sample Input 1

4
1 10
2 4
3 5
7 9

Sample Output 1

3

Explanation 1

Giải thích test : 3 người khách (1, 10), (2,4) và (3,5) cùng có mặt tại cửa hàng, ví dụ tại thời điểm t = 3.
*/
bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}

int main() {
    int n; cin>>n;
    vector<pair<int, int>> vt;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        vt.push_back({a,1});
        vt.push_back({b,-1});
    }
    sort(vt.begin(), vt.end(), cmp);
    int cnt=0, m_cnt=0;
    for(int i=0; i<vt.size(); i++){
        if(vt[i].second==1){
            cnt++; m_cnt = max(m_cnt, cnt);
        }else cnt--;
    }
    cout<<m_cnt;





    
}
