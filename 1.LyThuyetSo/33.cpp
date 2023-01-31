#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Liệt kê số lần xuất hiện của chữ số nguyên tố của 1 số theo thứ tự từ nhỏ đến lớn

Input Format

Số nguyên dương n

Constraints

1≤n≤10^18

Output Format

Liệt kê các chữ số nguyên tố của n cùng số lần xuất hiện, theo thứ tự từ bé đến lớn. Sau đó cách ra 1 dòng và liệt kê các chữ số nguyên tố của n cùng số lần xuất hiện, nhưng theo thứ tự xuất hiện trong n. Xem thêm test case để rõ hơn.

Sample Input 0

2273

Sample Output 0

2 2
3 1
7 1

2 2
7 1
3 1


*/

void pt1(ll n){
    int t[10]={0};
    while(n){
        int ngto = n%10;
        if(ngto==2||ngto==3||ngto==5||ngto==7){
            t[ngto]++;
        }
        n/=10;
    }
    for(int i=1; i<=9; i++){
        if(t[i]!=0){
            cout<<i<<" "<<t[i]<<endl;
        }
    }
}

ll reverse(ll n){
    ll res = 0;
    while(n){
        res = res*10 + n%10;
        n/=10;
    }
    return res;
}

void pt2(ll n){
    ll tmp = reverse(n);
    int t[10]={0};
    while(n){
        int ngto = n%10;
        if(ngto==2||ngto==3||ngto==5||ngto==7){
            t[ngto]++;
        }
        n/=10;
    }
    while(tmp){
        if(t[tmp%10]!=0){
            cout<<tmp%10<<" "<<t[tmp%10]<<endl;
            t[tmp%10] = 0;
        }
        tmp/=10;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    pt1(n);
    cout<<endl;
    pt2(n);
}   