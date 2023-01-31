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
Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

Input Format

2 số nguyên dương a, b

Constraints

1≤a≤b≤10^6

Output Format

In ra các số đẹp trong đoạn từ a tới b

Sample Input 0

4 50

Sample Output 0

4 8 9 12 16 18 20 24 25 27 28 32 36 40 44 45 48 49 50


*/

int ngto(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

int pt(int n){
    for(int i=2; i<=sqrt(n); i++){
        int cnt = 0;
        if(n%i==0 && ngto(i)){
            while(n%i==0){
                cnt++; 
                n /= i;
            }
            if(cnt>=2){return 1;}
        }
    }
    return 0;

}
int main(){
    int a,b; cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(pt(i))
            cout<<i<<" ";
    }
}    