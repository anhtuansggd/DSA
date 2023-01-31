#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho dãy số A[] gồm có N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu phần tử phân biệt? Chú ý giải bài này với 3 cách : Sử dụng set, map, sắp xếp.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^5; -10^9 ≤ A[i] ≤ 10^9

Output Format

In ra số lượng phần tử khác nhau trong mảng.

Sample Input 0

5
2 1 2 1 3

Sample Output 0

3


*/

int main() {
    int n,k; cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>k;
        mp[k]++;
    }
    cout<<mp.size();
}