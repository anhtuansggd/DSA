#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005], fl=0;

/*
Cho số nguyên dương N và K, nhiệm vụ của bạn là liệt kê các xâu nhị phân có độ dài N và có K bit 1 theo thứ tự từ điển tăng dần. Sau đó tiếp tục liệt kê các xâu nhị phân mà chỉ có duy nhất K bit 1 liên tiếp.

Input Format

1 dòng chứa 2 số nguyên dương N và K.

Constraints

1<=K<=N<=15;

Output Format

Dòng đầu tiên in ra các xâu nhị phân có K bit 1. Dòng thứ 2 in ra các xâu nhị phân có duy nhất K bit 1 liên tiếp.

Sample Input 0

3 2

Sample Output 0

011 101 110 
011 110 


*/

void init(){
    for(int i=0; i<=n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0){
        fl=1;
    }else{
        a[i]=1;
    }
}

int check(string s){
    int cnt = 0, res = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1'){ cnt++; }
        else cnt=0;
        if(cnt>=k){res++;}
    }
    return res==1;
}

int main(){
    cin>>n>>k;
    init();
    vector<string> v;
    while(!fl){
        string tmp = "";
        for(int i=1; i<=n; i++){
            tmp+=(a[i]+'0');
        }
        v.push_back(tmp);
        sinh();
    }
    for(string s:v){
        int tmp=k;
        for(char c:s){
            if(c=='1'){
                tmp--;
            }
        }
        if(tmp==0){
            cout<<s<<' ';
        }
    }
    cout<<endl;
    for(string s:v){
        if(check(s)){
            cout<<s<<' ';
        }
    }

    
    return 0;
}