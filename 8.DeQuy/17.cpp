#include <bits/stdc++.h>
using namespace std;

using ll = long long;

/*
Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

Input Format

Số nguyên không âm N.

Constraints

0≤n≤10^18

Output Format

Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. Dòng thứ hai in ra các chữ số của n theo thứ tự từ phải qua trái. Các chữ số được viết cách nhau một dấu cách.

Sample Input 0

21218

Sample Output 0

2 1 2 1 8 
8 1 2 1 2 


*/
void R2L(ll n){
    if(n<10){
        cout<<n<<" ";
    }else{
        cout<<n%10<<" ";
        R2L(n/10);
    }
}

void L2R(ll n){
    if(n<10){
        cout<<n<<" ";
    }else{
        L2R(n/10);
        cout<<n%10<<" ";
    }
}

int main() {
    ll n; cin>>n;
    L2R(n);
    cout<<endl;
    R2L(n);
    

    
    return 0;
}