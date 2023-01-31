#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Cho số tự nhiên N, hiện tại bạn được cung cấp một hoán vị của N phần tử các số từ 1 đến N. Nhiệm vụ của bạn là xác định xem hoán vị này là hoán vị thứ bao nhiêu nếu bạn sinh ra tất cả các hoán vị của tập N phần tử. Ví dụ với N = 3, thì hoán vị 132 là hoán vị thứ 2.

Input Format

Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N số nguyên của cấu hình hiện tại

Constraints

1<=N<=10;

Output Format

In ra số thứ tự của hoán vị được cho

Sample Input 0

3
3 1 2 

Sample Output 0

5


*/
int n, a[100];
bool fl = false;
void init(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}

void sinh(){
    int i=n-1;
    while(i>=1 &&  a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        fl = true;
    }
    int j=n;
    while(a[i]>a[j]){
        j--;
    }
    swap(a[i], a[j]);
    reverse(a+i+1, a+n+1);
}
int main(){
    cin>>n; int check[n+1];
    for(int i=1; i<=n; i++){
        cin>>check[i];
    }

    int cnt = 1;
    init();
    while(!fl){
        for(int i=1; i<=n; i++){
            if(a[i] != check[i]){
                break;
            }
            if(i==n){
                cout<<cnt; return 0;
            }
        }
        sinh();
        cnt++;
    }

    
}