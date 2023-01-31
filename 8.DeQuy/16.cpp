#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N.

Input Format

Số nguyên dương N

Constraints

10≤n≤10^18

Output Format

Chữ số lớn nhất và nhỏ nhất của N.

Sample Input 0

1256782

Sample Output 0

8 1


*/

ll find_max(ll n){
    if(n<10){
        return n;
    }else{
        return max(n%10, find_max(n/10));
    }
    
}

ll find_min(ll n){
    if(n<10){
        return n;
    }else{
        return min(n%10, find_min(n/10));
    }
}


int main() {
    ll n; cin>>n;
    cout<<find_max(n)<<" "<<find_min(n);

    
    return 0;
}