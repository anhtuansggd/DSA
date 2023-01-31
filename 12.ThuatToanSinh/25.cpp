#include<bits/stdc++.h>
using namespace std;

/*
Số lượng máy tính ở các phòng thực hành tăng lên nhanh chóng. Để gán mã cho các máy tính của trường đó người ta sử dụng mã gồm 2*N ký tự, trong đó: N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A. N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau). Người ta ước tính chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành. Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

Input Format

Số nguyên dương N

Constraints

1 < N < 6

Output Format

Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

Sample Input 0

2

Sample Output 0

AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22


*/

vector<string> hv1, hv2;
int n, fl=0;
string s="";

void sinh(){
    int i=s.size()-1;
    while(i>=0 && s[i]==('0'+n)){
        s[i]='1';
        i--;
    }
    if(i==-1){
        fl=1;
    }else{
        s[i]++;
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        s += (char)(65+i);
    }
    do{
        hv1.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    //
    s = string(n,'1');
    while(!fl){
        hv2.push_back(s);
        sinh();
    }
    for(string a:hv1){
        for(string b:hv2){
            cout<<a<<b<<endl;
        }
    }
    return 0;
}