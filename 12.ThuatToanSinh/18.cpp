#include<bits/stdc++.h>
using namespace std;

int n, a[1000005],fl=0;

/*
Một số được coi là số đẹp nếu nó chỉ bao gồm 2 số là 8 và 0. Bạn được cấp một số nguyên dương X, nhiệm vụ của bạn là tìm bội dương nhỏ nhất của X thỏa mãn bội này là số đẹp.

Input Format

Dòng đầu tiên là số bộ test T. T dòng tiếp theo mỗi dòng là một số nguyên dương N.

Constraints

1<=T<=300; 1<=N<=300;

Output Format

Mỗi test in kết quả trên 1 dòng

Sample Input 0

6
240
19
55
47
287
247

Sample Output 0

8880
88008
880
80088
8088808
8000000008


*/

void init(){
    for(int i=1; i<=n; i++){
        a[i]=0;
    }
    a[n]=8; 
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==8){
        i--;
    }
    if(i==0){
        fl=1;
    }else{ 
        a[i]=8;
        for(int j=i+1; j<=n; j++){
            a[j]=0;
        }
    }
}
int main(){
    n=19;
    init();
    vector<long long> vt;
    while(!fl){
        long long tmp = 0;
        for(int i=1; i<=n; i++){
            tmp = tmp*10 + a[i];
        }
        vt.push_back(tmp);
        sinh();
    }

    int x; cin>>x;
    while(x--){
        int n; cin>>n;
        for(long long t:vt){
            if(t%n==0){
                cout<<t<<endl; break;
            }
        }
    }
    
    return 0;
}