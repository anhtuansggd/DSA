#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

/*
Cho phân tích thừa số nguyên tố của một số nguyên dương N, hãy đếm số lượng ước số của số nguyên dương đó. Ví dụ N = 60 = 2^2 * 3^1 * 5^1.

Input Format

Dòng đầu tiên là T : số lượng thừa số nguyên tố khác nhau của N T dòng tiếp theo, mỗi dòng là 2 số nguyên p và e lần lượt là thừa số nguyên tố và số mũ tương ứng

Constraints

1≤T≤100; 2≤p≤100000; 1≤e≤100000;

Output Format

In ra số lượng ước số của N, vì kết quả quá lớn, hãy lấy dư với số 1000000007 (1e9 + 7)

Sample Input 0

3
2 2
3 1
5 1

Sample Output 0

12


*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n; cin>>n;
    ll res = 1;
    ll a,b;
    while(n!=0){
        cin>>a>>b;
        res *= (b+1);
        res %= mod;
        n--;
    }
    cout<<res;

    
    return 0;
}