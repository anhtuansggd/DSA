#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Viết chương trình cho phép nhập vào n và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy?

Input Format

Số nguyên dương n

Constraints

1≤n≤10^7

Output Format

Dòng đầu tiên liệt kê các số thỏa mãn, và dòng thứ 2 in ra số lượng số thỏa mãn.

Sample Input 0

200

Sample Output 0

2 3 5 7 11 13 17 19 23 29 37 47 59 67 79 89 101 103 107 109 113 127 137 139 149 157 167 179 199
29


*/
bool ngto(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){return false;}
    }
    return n>1;
}
bool maxN(int n){
    int maxT = n%10;
    n /= 10;
    while(n){
        if(maxT < n%10){ return false; }
        n /= 10;
    }
    return true;
}


int main(){
    int a; cin>>a;
    int cnt = 0;
    for(int n=1; n<=a; n++){
        if(maxN(n) && ngto(n)){
            cout<<n<<" "; cnt++;
        }
    }
    cout<<endl<<cnt;
}   