#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Cho 2 số nguyên dương N và K và một tổ hợp K phần tử của tập N phần tử các số từ 1 tới N. Bạn hãy xác định xem tổ hợp đã cho có số thứ tự bao nhiêu nếu xếp các tổ hợp chập K của N theo thứ tự ngược. Ví dụ N = 5, K = 3 và tổ hợp đã cho là (2, 3, 4) sẽ là tổ hợp có số thứ tự 4.

Input Format

Dòng đầu gồm 2 số nguyên dương N và K. Dòng thứ 2 gồm K số mô tả tổ hợp đã cho. Dữ liệu đảm bảo tổ hợp đã cho là hợp lệ.

Constraints

1<=K<=N<=15;

Output Format

In ra số thứ tự của tổ hợp

Sample Input 0

12 4
8 9 10 11 

Sample Output 0

5


*/

int n,k, a[100000];
bool fl = false;
void init(){
    for(int i=1; i<=k; i++){
        a[i] = n-k+i;
    }
}

void sinh(){
    int i=k;
    while(i>=1 && a[i]==a[i-1]+1){
        i--;
    }
    if(i==0){
        fl = true;
    }else{
        a[i]--;
        for(int j=i+1; j<=k; j++){
            a[j] = n-k+j;
        }
    }
}

int check(int a[], int b[]){
    for(int i=1; i<=k ;i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}

int main(){
    cin>>n>>k;
    int inpt[k+1];
    for(int i=1; i<=k; i++){
        cin>>inpt[i];
    }
    init();
    int cnt=1;
    while(!fl && !check(a, inpt)){
        sinh(); cnt++;
    }
    cout<<cnt;
  
    



    
}