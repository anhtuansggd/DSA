#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Cho hai số nguyên dương N và K. Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của các số từ 1 tới N.

Input Format

2 số nguyên dương N và K.

Constraints

1<=K<=N<=15;

Output Format

In ra các tổ hợp trên từng dòng.

Sample Input 0

5 2

Sample Output 0

12
13
14
15
23
24
25
34
35
45


*/

int n,k, a[100];
bool fl = false;

void init(){
    for(int i=1; i<=n; i++){
        a[i]=i;
    }
}

void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        fl = true;
    }else{
        a[i]++;
        for(int j=i+1; j<=n; j++){
            a[j] = a[j-1]+1;
        }
    }

}

int main(){
    cin>>n>>k;
    init();
    while(!fl){
        for(int i=1; i<=k; i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();
    }



    
}