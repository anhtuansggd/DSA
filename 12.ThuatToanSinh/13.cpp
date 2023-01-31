#include<bits/stdc++.h>
using namespace std;

int n, cnt, a[100], fl=0, buildFl=0;

/*
Cho một tập gồm N phần tử được đánh số từ 1 đến N. Nhiệm vụ của bạn là liệt kê tất cả các tập con khác rỗng của N theo thứ tự từ điển tăng dần.

Input Format

Dòng duy nhất chứa số nguyên dương N.

Constraints

1<=N<=9;

Output Format

In ra các tập con của N theo thứ tự từ điển tăng dần.

Sample Input 0

4

Sample Output 0

1 
1 2 
1 2 3 
1 2 3 4 
1 2 4 
1 3 
1 3 4 
1 4 
2 
2 3 
2 3 4 
2 4 
3 
3 4 
4 


*/

void init(){
    a[1] = 1;
    cnt = 1;
}

void sinh(){
    int i=cnt;
    while(i>=1 && a[i]==n){
        buildFl=1;
        i--;
    }
    if(i==0){
        fl = 1;
    }else{
        if(buildFl){
            a[i]++; cnt--;
            buildFl = 0;
        }else{
            a[i+1] = a[i]+1;
            cnt++;
        }

    }
}
int main(){
    cin>>n;
    init();
    while(!fl){
        for(int i=1; i<=cnt; i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
        sinh();
    }

    
    return 0;
}