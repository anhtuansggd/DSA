#include<bits/stdc++.h>
using namespace std;

/*
Cho biểu thức chỉ bao gồm dấu '(' và ')', nhiệm vụ của bạn là hãy sinh ra các xâu biểu thức cân bằng, ví dụ về biểu thức cân bằng (), ()()(), ((())), (())((())), ví dụ về biểu thức không cân bằng (()))(, ()()))

Input Format

Dòng duy nhất chứa số nguyên dương N là độ dài của biểu thức

Constraints

2<=N<=14, N là số chẵn

Output Format

In ra các biểu thức cân bằng theo thứ tự từ điển. Nếu không tồn tại biểu thức hợp lệ có độ dài N thì in ra NOT FOUND.

Sample Input 0

4

Sample Output 0

(())
()()


*/
int n, a[1005], fl=0;

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

int check(string s){
    if(s[0]=='1'){return 0;}
    string s1 = s.substr(0,2);
    string s2 = s.substr(2,n);
    int l=0, r=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            l++;
        }else if(s[i]=='1' && l>=r){
            r++;
        }
        if(l<r){
            return 0;
        }
        if(l>(s.size()/2)){
            return 0;
        }
        if(r>(s.size()/2)){
            return 0;
        }
        if(i==s.size()-1 && l==r){
            return 1;
        }
    }
    if(s1==s2){
        return 1;
    }
    return 0;

}
int main(){
    cin>>n;
    int flC=0;
    while(!fl){
        string s = "";
        for(int i=1; i<=n; i++){
            if(a[i]==0){ s+= '0'; }
            else{ s+= '1'; }
        }
        if(check(s)){
            flC=1;
            s="";
            for(int i=1; i<=n; i++){
                if(a[i]==0){ s+= "("; }
                else{ s+= ")"; }
            }
            cout<<s<<endl;
        }
        sinh();
    }
    if(!flC){
        cout<<"NOT FOUND";
    }


    return 0;
}