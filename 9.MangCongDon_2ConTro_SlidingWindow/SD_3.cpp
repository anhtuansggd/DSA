#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy tìm median của mọi dãy con liên tiếp cỡ K của mảng A[].

Input Format

    Dòng 1 là N và K

    Dòng 2 gồm N số trong mảng A[]

Constraints

    1<=K<=N<=2.10^5

    1<=A[i]<=10^9

Output Format

In ra N - K + 1 median của các dãy con

Sample Input 0

8 2
7 6 6 2 9 6 2 7 

Sample Output 0

6 6 2 2 6 2 2 

Sample Input 1

6 1
7 2 9 2 4 6 

Sample Output 1

7 2 9 2 4 6 


*/

int n,k; 
multiset<int> low,high;

void ins(int val){
    int cur_med = *low.rbegin();
    if(val < cur_med){
        low.insert(val);
        if(low.size() > (k+1)/2){
            high.insert(*low.rbegin());
            low.erase(low.find(*low.rbegin()));
        }
    }else{
        high.insert(val);
        if(high.size() > k/2){
            low.insert(*high.begin());
            high.erase(high.begin());
        }
    }
}
void era(int val){
    if(high.find(val)!=high.end()){
        high.erase(high.find(val));
    }else{
        low.erase(low.find(val));
    }
    if(low.empty()){
        low.insert(*high.begin());
        high.erase(high.begin());
    }
}
int main() {
    cin>>n>>k; int a[n]; for(int &x:a){cin>>x;}
    if(k==1){
        for(int x:a){cout<<x<<' ';}
        return 0;
    }
    low.insert(a[0]);
    for(int i=1; i<k; i++){
        ins(a[i]);
    }
    cout<<*low.rbegin()<<' ';
    for(int i=k; i<n; i++){
        era(a[i-k]);
        ins(a[i]);
        cout<<*low.rbegin()<<' ';
    }


}
 