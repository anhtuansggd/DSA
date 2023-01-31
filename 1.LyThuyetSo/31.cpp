#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Đếm số lượng các số nguyên tố cùng nhau với n không vượt quá n.

Input Format

Số nguyên duy nhất n

Constraints

1≤n≤10^12

Output Format

Số lượng các số nằm trong đoạn từ 1 tới n mà nguyên tố cùng nhau với n.

Sample Input 0

55

Sample Output 0

40

Sample Input 1

59

Sample Output 1

58


*/
int main() {
    ll x; cin>>x;
    ll res = x;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            res = res - res/i*1ll;
        }
        while(x%i==0){
            x /= i;
        }
    }
    if(x!=1) res = res - res/x;
    cout<<res;

}