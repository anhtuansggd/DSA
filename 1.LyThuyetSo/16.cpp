#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll  long long 
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define FORR(i, a, b) for(int i=a; i>b; i--)
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll> 

/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

Input Format

Số nguyên dương N

Constraints

1≤N≤10^8.

Output Format

In ra YES nếu N là số Smith, ngược lại in ra NO.

Sample Input 0

22

Sample Output 0

YES


*/

int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}



int Smith(int n){
    int r1 = sumDigit(n);
    int r2 = 0;
    int fl = 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0 ){
            fl = 1;
            while(n%i==0){
                n/=i;
                r2 += sumDigit(i);
            }
        }
    }
    if(n>1){r2 += sumDigit(n);}
    return r1==r2 && fl;
}



int main(){
    int n; cin>>n;
    if(Smith(n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}    