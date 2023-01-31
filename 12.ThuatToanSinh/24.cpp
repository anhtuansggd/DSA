#include<bits/stdc++.h>
using namespace std;

/*
Cho chữ cái c in hoa và số nguyên K; Hãy tìm cách liệt kê tất cả các xâu có K ký tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. Các ký tự được phép lặp lại nhưng không tính các xâu là hoán vị của xâu nào đó đã liệt kê trước đó.

Input Format

Chữ cái c và K

Constraints

'A' < c <='H'; 0 < K < (c – ‘A’);

Output Format

Ghi ra lần lượt các xâu ký tự kết quả theo thứ tự từ điển trên từng dòng.

Sample Input 0

C 2

Sample Output 0

AA
AB
AC
BA
BB
BC
CA
CB
CC


*/
char c; int n,fl=0;
string a="";
void init(){
    a = string(n,'A');
} 

void sinh(){
    int i=n-1;
    while(i>=0 && a[i]==c){
        a[i] = 'A';
        i--;
    }
    if(i==-1){
        fl=1;
    }else{
        a[i]++;
    }
}
int main(){
    cin>>c>>n;
    init();
    while(!fl){
        cout<<a<<endl;
        sinh();
    }
    return 0;
}