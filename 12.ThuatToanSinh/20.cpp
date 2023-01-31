#include<bits/stdc++.h>
using namespace std;

int n, k,a[1005],fl=0;

/*
Nhiệm vụ của bạn là hãy liệt kê các xâu nhị phân thuận nghịch có độ dài chẵn theo thứ tự từ điển với chiều dài không quá n kí tự.

Input Format

Dòng duy nhất chứa số nguyên N.

Constraints

2<=N<=30

Output Format

In ra các xâu nhị phân đối xứng có độ dài chẵn theo thứ tự từ điển.

Sample Input 0

4

Sample Output 0

00
0000
0110
1001
11
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
    vector<string> vt;
    for(n=1; n<=m/2; n++){
        fl=0; 
           init();
           while(!fl){
               string s = "";
             for(int i=1; i<=n; i++){
                 s+=to_string(a[i]);
             }
             string t = s;
             reverse(t.begin(), t.end());
               vt.push_back(s+t);   
               sinh();
         }
    }
    sort(vt.begin(), vt.end());
    for(string s:vt){
        cout<<s<<endl;
    }

    
    return 0;
}