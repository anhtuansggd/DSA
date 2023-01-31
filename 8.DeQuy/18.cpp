#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

Input Format

Số nguyên không âm N.

Constraints

0≤n≤10^18

Output Format

Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

Sample Input 0

123456

Sample Output 0

12
9


*/

ll tongChan(ll n){
    if(n<10){
        if(n%2==0){
            return n;
        }else{
            return 0;
        }
    }else{
        if((n%10)%2==0){
            return n%10 + tongChan(n/10);
        }else{
            return tongChan(n/10);
        }
    }
}


ll tongLe(ll n){
    if(n<10){
        if(n%2!=0){
            return n;
        }else{
            return 0;
        }
    }else{
        if((n%10)%2!=0){
            return n%10 + tongLe(n/10);
        }else{
            return tongLe(n/10);
        }
    }
}

int main() {
    ll n; cin>>n;
    cout<<tongChan(n)<<endl;
    cout<<tongLe(n);
    

    
    return 0;
}