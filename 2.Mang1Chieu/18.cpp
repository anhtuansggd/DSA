#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt[(int)1e6+7];

/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

Output Format

In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.

Sample Input 0

6
2 2 1 3 2 3

Sample Output 0

4

Explanation 0

Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)
*/
int main() {
    int n,tmp; cin>>n;
    while(n--){
        cin>>tmp;
        cnt[tmp]++;
    }
    ll res = 0;
    for(int i=0; i<1e6+7; i++){
        if(cnt[i]!=0){
            res += (1ll*cnt[i]*(cnt[i]-1))/2;
        }
    }
    cout<<res;
    
    


}