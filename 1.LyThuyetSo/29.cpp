#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho trước, các số cách nhau một dấu cách.

Input Format

2 số nguyên a, b

Constraints

1≤a≤b≤10^6

Output Format

Liệt kê các số đẹp trong đoạn, các số viết cách nhau một khoảng trống

Sample Input 0

1 400

Sample Output 0

161


*/
bool thuanNghich(int n){
    int res = 0, tmp = n, fl = 0;
    while(tmp){
        int t = tmp%10;
        if(t==6){fl = 1;}
        res = res*10 + t;
        tmp/=10;
    }
    return n == res && fl == 1;
}

bool tong8(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/= 10;
    }
    int x = sum%10;
    if(x == 8){return true;}
    return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b; cin>>a>>b;
    for(int n=a; n<=b; n++){
        if(thuanNghich(n) && tong8(n)){
            cout<<n<<" ";
        }
    }
}    