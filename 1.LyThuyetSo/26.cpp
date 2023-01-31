#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. Cho một số nguyên dương n, kiểm tra xem n có phải là số hoàn hảo hay không.

Input Format

Số nguyên dương N

Constraints

1≤N≤9*10^18

Output Format

In YES nếu N là số hoàn hảo, ngược lại in NO

Sample Input 0

28

Sample Output 0

YES

Explanation 0

28 có các ước thực sự là 1, 2, 4, 7, 14 có tổng bằng 28.
*/

int ngto(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

int check(ll n){
    for(int i=2; i<=31; i++){
        if(ngto(i)){
            ll res = pow(2, i-1)*(pow(2, i)-1);
            if(res == n){
                return 1;
            }
        }
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
   
    
 