#include <bits/stdc++.h>
using namespace std;
using ll = long long;


/*
Cho 4 số nguyên dương x, y, z, n. Tìm số nguyên dương nhỏ nhất có n chữ số chia hết cho cả x, y, và z.

Input Format

4 số nguyên dương x, y, z, n

Constraints

(1 ≤x,y,z≤10^4); n≤16

Output Format

Kết quả của bài toán, trường hợp không tìm được số thỏa mãn in -1

Sample Input 0

2 3 5 4

Sample Output 0

1020

Sample Input 1

3 5 7 2

Sample Output 1

-1


*/

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else return gcd(b, a%b);
}
ll lcm(int a, int b){
    return 1ll*a/gcd(a,b)*b;
}

int main() {
    int x, y, z, n; cin>>x>>y>>z>>n;
    ll lcm1 = lcm(lcm(x,y), z);
    //m1 la so lon nhat co n chu so
    ll m1 = pow(10,n)-1;
    if(m1 < lcm1){ cout<<"-1"; }
    //bai toan tim so nho nhat chia het cho mot so
    else{
        //m2 la so nho nhat co n chu so
        ll m2 = pow(10,n-1);
        if(m2%lcm1==0){cout<<m2;}
        else{cout<<(m2/lcm1+1)*lcm1;}
    }

    


}