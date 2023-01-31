#include<bits/stdc++.h>
using namespace std;

string a; 
int fl=0;
void sinh(){
    int i=(a.length()-1) - 1;
    while(i>=0 && a[i]>=a[i+1]){
        i--;
    }
    if(i==-1){
        fl = 1;
    }else{
        int j=a.length()-1;
        while(a[i]>=a[j]){j--;}
        swap(a[i], a[j]);
        reverse(a.begin()+i+1, a.end());
    }
}

int main(){
    cin>>a;
    sinh();
    if(!fl){
        cout<<a;
    }else{
        cout<<"NOT EXIST";
    }
    
    return 0;
}