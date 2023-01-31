#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
In ra các số chính phương trong đoạn từ a tới b. Bài này bạn nào code bằng java thì có thể bỏ qua vì test lớn quá Java không chạy xong trong 8s.

Input Format

2 số nguyên dương a, b

Constraints

1≤a≤b≤10^12

Output Format

In ra các số chính phương trong đoạn giữa 2 số a, b trên một dòng. Các số cách nhau một khoảng trắng.

Sample Input 0

10 20

Sample Output 0

16


*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b; cin>>a>>b;
    ll tmp1,tmp2;
    tmp1 = sqrt(a);
    tmp2 = sqrt(b);
    for(ll i=tmp1; i<=tmp2; i++){
        ll tmp3 = i*i;
        if(tmp3>=a && tmp3<=b){
            cout<<tmp3<<" ";
        }
    }
    
}    