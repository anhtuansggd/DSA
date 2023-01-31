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

ll a,b;

/*
Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch. Ví dụ: các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.

Input Format

Số nguyên dương n

Constraints

99≤n≤10^18

Output Format

Ghi ra YES tương ứng với số đẹp, NO trong trường hợp ngược lại

Sample Input 0

122222

Sample Output 0

YES


*/

ll takeMid(ll n){
    ll res = 0, tmp=n;
    a=tmp%10;
    tmp/=10;
    while(tmp>9){
        res = res*10 + tmp%10;
        tmp /= 10;
    }
    b = tmp;
    return res;
}

int reverse(ll n){
    n = takeMid(n);
    ll res = 0, tmp = n;
    while(tmp){
        res = res*10 + tmp%10;
        tmp /= 10;
    }
    if(res == n){return 1;}
    return 0;
}

int check(ll n){
    if(reverse(n)){
        if(a==2*b || 2*a==b){
            return 1;
        }
    }
    return 0;
}

int main(){
    ll n; cin>>n;
    if(check(n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}    