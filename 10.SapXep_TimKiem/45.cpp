#include<bits/stdc++.h>
using namespace std;
using ll = long long;
/*
Bạn được cung cấp một danh sách phát của một đài phát thanh kể từ khi đài đó được thành lập. Danh sách bài hát có tổng cộng n bài hát. Chuỗi các bài hát liên tiếp dài nhất mà mỗi bài hát là duy nhất?

Input Format

Dòng đầu tiên chứa một số nguyên n: số lượng bài hát. Dòng tiếp theo có n số nguyên k1, k2,…, kn: số id của mỗi bài hát.

Constraints

1≤n≤2⋅10^5; 1≤ki≤10^9

Output Format

In độ dài của chuỗi bài hát dài nhất mà các bài hát này mỗi bài hát chỉ xuất hiện 1 lần.

Sample Input 0

5
1 2 3 4 5

Sample Output 0

5

Sample Input 1

5
1 1 1 1 1

Sample Output 1

1

Sample Input 2

8
1 2 1 3 2 7 4 2

Sample Output 2

5


*/
int main(){
    int n; cin>>n;
    int a[n];
    map<int, int> mp;
    int l=0,res = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mp[a[i]]++;
        while(mp[a[i]]>1){
            mp[a[l]]--;
            l++;
        }
        res = max(i-l+1, res);
    }
    cout<<res;

}    