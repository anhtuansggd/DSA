#include<bits/stdc++.h>
using namespace std;

/*
Cho một xâu kí tự S chỉ bao gồm các kí tự , hãy in ra các hoán vị của các kí tự khác nhau trong S theo thứ tự từ điển tăng dần.

Input Format

1 dòng chứa xâu S

Constraints

1<=len(S)<=10;

Output Format

In ra các hoán vị của xâu S

Sample Input 0

lqk

Sample Output 0

klq
kql
lkq
lqk
qkl
qlk


*/
int n, cnt, a[100], fl=0;

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
        fl = 1;
    }else{
        int j=n;
        while(a[i]>a[j]){j--;}
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}

int main(){
    string s; cin>>s;
    set<char> st;
    for(char c:s){st.insert(c);}
    n = st.size();
    s = "";
    for(char c:st){s+=c;}
    init();
    while(!fl){
        for(int i=1; i<=n; i++){
            cout<<s[a[i]-1];
        }
        cout<<endl;
        sinh();
    }

    
    return 0;
}