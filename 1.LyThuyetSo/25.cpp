#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Kiểm tra xem một số có số lượng ước số của nó là số lẻ

Input Format

Số nguyên dương N

Constraints

1≤N≤10^18

Output Format

In ra YES nếu N là số có số ước là số lẻ, ngược lại in NO.

Sample Input 0

100

Sample Output 0

YES

Explanation 0

Số 100 có các ước 1, 2, 4, 5, 10, 20, 25, 50, 100. Vậy 100 có 9 ước là số lẻ, nên đáp án là YES.
*/

// 18 co cac uoc (1,18), (2,9), (3,6)
// 36 (1, 36), (2,18), (3,13), (4,9), (6,6) -> Uoc so giong nhau o sqrt(n) -> so chinh phuong

int check(ll n){
    int sqr = sqrt(n);
    if(1ll*sqr*sqr == n){
        return 1;
    }
    return 0;
}

int main(){
    ll a; cin>>a;
    if(check(a)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;

}
   
    
 