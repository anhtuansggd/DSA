#include<bits/stdc++.h>
using namespace std;

/*
Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là ‘A’, ‘E’, còn lại là phụ âm. Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến chữ cái c (‘D’ <= c <= ‘H’) sao cho mỗi chữ cái được sử dụng đúng một lần và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm. Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.

Input Format

Chỉ có một dòng ghi chữ cái c

Constraints

'D' <= c <= 'H'

Output Format

Liệt kê các xâu thỏa mãn, mỗi xâu trên một dòng.

Sample Input 0

D

Sample Output 0

ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BCDA
BDCA
CBDA
CDBA
DBCA
DCBA


*/

int nguyenAm(char c){
    return c=='A' || c=='E';
}

int check(string s){
    for(int i=1; i<s.size()-1; i++){
        if(nguyenAm(s[i])){
            if(!nguyenAm(s[i-1]) && !nguyenAm(s[i+1])){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    char c; cin>>c;
    string s = "";
    for(char i='A'; i<=c; i++){
        s += i;
    }
    do{
        if(check(s)){
            cout<<s<<endl;
        }
    }while(next_permutation(s.begin(), s.end()));


    return 0;
}