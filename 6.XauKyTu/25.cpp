#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
/*
Cho số tự nhiên m và số nguyên s không âm. Nhiệm vụ của bạn là tìm số bé nhất và lớn nhất có m chữ số và tổng chữ số bằng s.

Input Format

Một dòng gồm 2 số m và s

Constraints

1 ≤ m ≤ 100;  0 ≤ s ≤ 900

Output Format

In ra số bé nhất, lớn nhất có thể đạt được, mỗi số in ra trên 1 dòng. Nếu không có đáp án thì in ra 1 dòng "NOT FOUND".

Sample Input 0

2 15

Sample Output 0

69
96

Sample Input 1

2 30

Sample Output 1

NOT FOUND


*/
int main() {
    int m,s; cin>>m>>s;
    //2 TH ko the tim
    if(s>9*m || (s==0 && m>=2)){
        cout<<"NOT FOUND"; return 0;
    }else{
        int lon[m], be[m];

        //Giu 1 don vi cho so cuoi
        int n = s-1;
        for(int i=m-1; i>0; i--){
            if(n>=9){
                be[i] = 9;
                n -= 9;
            }else{
                be[i] = n; n = 0;
            }
        }
        be[0]=n+1;

        for(int i=0; i<m; i++){
            if(s>=9){
                lon[i] = 9;
                s -= 9;
            }else{
                lon[i] = s; s = 0;
            }
        }
        for(int i=0; i<m; i++){
            cout<<be[i];
        }
        cout<<endl;
        for(int i=0; i<m; i++){
            cout<<lon[i];
        }
    }

    
}
