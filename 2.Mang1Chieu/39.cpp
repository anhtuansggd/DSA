#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử, bạn hãy tìm ra dãy con dài nhất có tổng bằng 0, nếu có nhiều dãy con thỏa mãn hãy in ra dãy con đầu tiên, nếu không tồn tại dãy con có tổng bằng 0 thì in ra NOT FOUND.

Input Format

    Dòng 1 là N

    Dòng 2 gồm N phần tử trong mảng A[]

Constraints

    1<=N<=10^6

    0<=abs(A[i])<=10^6

Output Format

In ra đáp án của bài toán

Sample Input 0

15
-4 1 2 -1 2 -3 -8 2 1 -2 -8 7 -5 2 8 

Sample Output 0

-4 1 2 -1 2 

Sample Input 1

18
-9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 7 6 

Sample Output 1

-9 5 7 -6 7 0 -9 5 4 -9 -5 2 -3 8 6 -3 


*/

int main() {
    int n; cin>>n;
    int a[n]; for(int &x:a){cin>>x;}
    map<ll, int> mp;
    ll sum = 0;
    int len=0,start,end;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sum==0){
            if(len < i+1){
                len = i+1;
                start = 0; end = i;
            }
        }
        if(mp.count(sum)){
            if(len < i-mp[sum]){
                len = i-mp[sum];
                start = mp[sum]+1;
                end = i;
            }
        }
        if(mp.count(sum)==0){
            mp[sum] = i;
        }
    }
    if(len!=0){
        for(int i=start; i<=end; i++){
            cout<<a[i]<<' ';
        }
    }else cout<<"NOT FOUND";
    
}
    