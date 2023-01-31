#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Trong một liên hoan phim, n bộ phim sẽ được chiếu. Bạn biết thời gian bắt đầu và kết thúc của mỗi bộ phim. Số lượng phim tối đa bạn có thể xem toàn bộ là bao nhiêu? Biết rằng nếu thời gian kết thúc của bộ phim trước bằng hoặc nhỏ hơn thời gian bắt đầu của bộ phim sau thì bạn có thể xem cả 2 phim này.

Input Format

Dòng nhập đầu tiên có số nguyên n: số lượng phim. Sau đó, có n dòng mô tả các bộ phim. Mỗi dòng có hai số nguyên a và b: thời gian bắt đầu và kết thúc của một bộ phim.

Constraints

1≤ n, m ≤2.10^5; 1≤ a, b ≤10^9

Output Format

In một số nguyên: số lượng phim tối đa.

Sample Input 0

3
3 5
4 9
5 8

Sample Output 0

2

Explanation 0

Giải thích test : Bạn có thể xem 2 bộ phim (3,5) và (5,8)
*/

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int n; cin>>n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    sort(begin(v), end(v), cmp);
    int cnt = 1, time = v[0].second;
    for(int i=1; i<n; i++){
        if(time <= v[i].first){
            ++cnt; time = v[i].second;
        }
    }
    cout<<cnt;
    return 0;
}