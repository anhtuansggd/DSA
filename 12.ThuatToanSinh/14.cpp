#include<bits/stdc++.h>
using namespace std;

int n, a[100], fl=0;

/*
Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là “phát lộc” nếu thỏa mãn các điều kiện sau: Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6. Không có 2 chữ số 8 nào ở cạnh nhau. Không có nhiều hơn 3 chữ số 6 ở cạnh nhau. Viết chương trình liệt kê các xâu ký tự phát lộc độ dài N theo thứ tự tăng dần.

Input Format

Số nguyên dương N;

Constraints

2<=N<=15;

Output Format

Các xâu lộc phát thỏa mãn điều kiện

Sample Input 0

7

Sample Output 0

8666866
8668666
8668686
8686686
8686866


*/
void init(){
    a[1]=8; a[2]=6; a[n] = 6;
    for(int i=3; i<n; i++){
        a[i]=6;
    }
}

void sinh(){
    int i=n-1;
    while(i>=3 && a[i]==8){
        a[i]=6;
        i--;
    }
    if(i<=2){
        fl = 1;
    }else{
        a[i]=8;
    }
}

int check(){
    int d6=0, d8=0;
    for(int i=1; i<=n; i++){
        if(a[i]==6){
            d6++; d8=0;
        }else{ d8++; d6=0; }
        if(d6==4 || d8==2){
            return 0;
        }
    }
    return 1;
}
int main(){
    cin>>n;
    init();
    while(!fl){
        if(check()){
            for(int i=1; i<=n; i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        sinh();
    }

    
    return 0;
}