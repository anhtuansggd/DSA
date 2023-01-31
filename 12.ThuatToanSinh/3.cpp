#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Cho số tự nhiên N, bạn được cung cấp một hoán vị của N phần tử từ 1 tới N. Nhiệm vụ của bạn là sinh ra hoán vị kế tiếp của hoán vị được cho, nếu hoán vị được cho là hoán vị cuối cùng thì yêu cầu in ra hoán vị đầu tiên.

Input Format

Dòng đầu tiên là số tự nhiên N. Dòng thứ 2 là các số tự nhiên trong hoán vị hiện tại.

Constraints

1<=N<=1000;

Output Format

In ra hoán vị kế tiếp trên một dòng.

Sample Input 0

6
3 1 5 6 2 4 

Sample Output 0

3 1 5 6 4 2 


*/

int n, a[10000000];
void sinh(){
    int i=n-1;
    while(i>=1 && a[i] > a[i+1]){
        i--;
    }
    if(i==0){
        for(int i=1; i<=n; i++){
            a[i] = i;
        }
    }else{
        int j=n;
        while(j>=1 && a[i]>a[j]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }

}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sinh();
    for(int i=1; i<=n; i++){
        cout<<a[i]<<' ';
    }


    
}