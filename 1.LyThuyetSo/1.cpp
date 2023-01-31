#include <bits/stdc++.h>
using namespace std;
/*
Kiểm tra một số nguyên không âm N có phải là số nguyên tố hay không?

Input Format

Dòng duy nhất chứa số nguyên dương N

Constraints

0≤N≤10^9

Output Format

In ra YES nếu n là số nguyên tố, ngược lại in NO.

Sample Input 0

999999999

Sample Output 0

NO

Sample Input 1

17

Sample Output 1

YES


*/

int prime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return n>1;
}

int main(){

    int n; cin>>n;
    if(prime(n)) cout<<"YES";
    else cout<<"NO";

    
    return 0;
}