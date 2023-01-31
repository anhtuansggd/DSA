#include<bits/stdc++.h>
using namespace std;

int n, a[1005], fl=0;

/*
Tèo có N thẻ bài, mỗi thẻ ghi một con số từ 1 tới N. Không có 2 thẻ nào ghi hai số trùng nhau. Tèo muốn xếp thứ tự các thẻ bài sao cho không có hai con số nào liền kề nhau ở cạnh nhau.

Input Format

Số nguyên dương N

Constraints

4<=N<=10;

Output Format

In ra các cấu hình thỏa mãn theo thứ tự từ điển tăng dần

Sample Input 0

4

Sample Output 0

2413
3142


*/

void init(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
} 

void sinh(){
    int i=n-1;
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        fl=1;
    }else{
        int j=n;
        while(a[i]>a[j]){j--;}
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}
int main(){
    cin>>n;
    init();  
    while(!fl){
        int flR=0;
        for(int i=1; i<=n-1; i++){
            if(abs(a[i]-a[i+1])<=1){
                flR=1;
            }
        }
        if(!flR){
            for(int i=1; i<=n; i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        sinh();
    }
    return 0;
}