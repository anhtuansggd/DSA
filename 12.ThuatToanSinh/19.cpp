#include<bits/stdc++.h>
using namespace std;

int n, a[1005],fl=0;

/*
Nhiệm vụ của bạn là hãy liệt kê các xâu nhị phân thuận nghịch có độ dài n theo thứ tự từ điển.

Input Format

Dòng duy nhất chứa số nguyên dương n.

Constraints

1<=n<=15;

Output Format

In ra các xâu thuận nghịch theo thứ tự từ điển

Sample Input 0

4

Sample Output 0

0000
0110
1001
1111


*/

void init(){
    for(int i=1; i<=n; i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        i--;
    }
    if(i==0){
        fl=1;
    }else{ 
        a[i]=1;
        for(int j=i+1; j<=n; j++){
            a[j]=0;
        }
    }
}
int main(){
    int m; cin>>m;
    n = m/2;
    while(!fl){
        string s = "";
        for(int i=1; i<=n; i++){
            s += to_string(a[i]);
        }
        string t = s;
        reverse(t.begin(), t.end());
        if(m%2==0){
            cout<<s+t<<endl;
        }else{
            cout<<s+"0"+t<<endl<<s+"1"+t<<endl;
        }
        sinh();
    }

    
    return 0;
}