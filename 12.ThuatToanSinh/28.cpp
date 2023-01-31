#include<bits/stdc++.h>
using namespace std;

int n=3, a[1005], fl=0;

/*
Cho 4 số nguyên X, Y, Z, T. Nhiệm vụ của bạn là tìm giá trị lớn nhất của biểu thức X o1 Y o2 Z o3 T, trong đó o1, o2, o3 có thể là các dấu +, -.

Input Format

Dòng duy nhất gồm 4 số X, Y, Z, T

Constraints

-10^5<=X,Y,Z,T<=10^4

Output Format

In ra giá trị lớn nhất của biểu thức

Sample Input 0

59 71 80 -3

Sample Output 0

213


*/

void init(){
    for(int i=1; i<=n; i++){
        a[i] = 1;
    }
} 

void sinh(){
    int i=3;
    while(i>=1 && a[i]==2){
        i--;
    }
    if(i==0){
        fl=1;
    }else{
        a[i]=2;
        for(int j=i+1; j<=3; j++){
            a[j]=1;
        }
    }
}
int main(){
    int x,cnt=0;
    vector<int> vt;
    while(cin>>x){
        vt.push_back(x);
    }
    set<int> stR;
    init();  
    while(!fl){
        int r = vt[0],indxDau=1;
        for(int i=1; i<=vt.size(); i++){
            if(a[indxDau]==1){
                r += vt[i];
            }else{
                r -= vt[i];
            }
            indxDau++;
        }
        stR.insert(r);
        sinh();
    }
    cout<<*(stR.rbegin());
    return 0;
}