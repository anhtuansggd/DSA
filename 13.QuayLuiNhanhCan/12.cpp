#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;
int n, k, a[100005], inpt[100005], fl=0;

/*
Cho mảng A[] gồm n phần tử, hãy xác định xem có thể chia mảng A[] thành 2 tập sao cho tổng của 2 tập bằng nhau hay không?

Input Format

Dòng đầu tiên là số nguyên n; Dòng thứ 2 gồm n số nguyên của mảng A[]

Constraints

1<=n<=20; 1<=A[i]<=100;

Output Format

In ra 1 nếu có thể chia mảng thành 2 phần bằng nhau, ngược lại in 0.

Sample Input 0

5
9 9 4 4 5 

Sample Output 0

0

Sample Input 1

4
1 2 3 4

Sample Output 1

1


*/

void check(){
    ll r0=0, r1=0;
    for(int i=1; i<=n; i++){
        if(a[i]){r1 += inpt[i];}
        else{r0 += inpt[i];}
    }
    if(r0==r1){
        fl=1;
    }
}

void Try(int i){
    for(int j=0; j<=1; j++){
        a[i]=j;
        if(i==n){
            check();
        }else{
            Try(i+1);
        }
    }
}
int main() {
    cin>>n;
    for(int i=1; i<=n; i++) cin>>inpt[i];
    Try(1);
    if(fl){
        cout<<1;
    }else cout<<0;

}

