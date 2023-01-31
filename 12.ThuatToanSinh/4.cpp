#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Nhiệm vụ của bạn ở bài tập này là sinh ra các xâu chỉ bao gồm 2 kí tự A và B theo thứ tự từ điển giảm dần.

Input Format

Dòng duy nhất chứa số nguyên dương N là độ dài của xâu.

Constraints

1<=N<=10;

Output Format

In ra các xâu AB, mỗi xâu được in trên 1 dòng.

Sample Input 0

3

Sample Output 0

BBB
BBA
BAB
BAA
ABB
ABA
AAB
AAA


*/
int main(){
    int n; cin>>n;
    char str[] = {'A','B'};
    for(int i=(1 << n)-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            if(i & (1 << j)){
                cout<<str[1];
            }else{
                cout<<str[0];
            }
        }
        cout<<"\n";
    }


    
}