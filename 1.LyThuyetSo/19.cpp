#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll  long long 
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define FORR(i, a, b) for(int i=a; i>b; i--)
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll> 

/*
Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước

Input Format

2 số nguyên dương a, b

Constraints

1≤a≤b≤10^6

Output Format

In ra các số đẹp trong đoạn từ a tới b

Sample Input 0

3 49

Sample Output 0

4 8 9 16 25 27 32 36 49


*/


int pt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++; 
                n /= i;
            }
            if(cnt<2){return 0;}
        }
    }
    if(n>1){return 0;}
    return 1;
}
int main(){
    int a,b; cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(pt(i))
            cout<<i<<" ";
    }
}    