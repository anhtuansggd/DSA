#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;


int main() {
    int n,k; cin>>n>>k;
    int a[n]; for(int &x:a){cin>>x;}
    map<ll, int> mp;
    ll sum = 0;
    int len = INT_MAX;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sum==k){len = min(len, i+1);}
        if(mp.count(sum-k)){
            len = min(len,i-mp[sum-k]);
        }
        mp[sum] = i;
    }
    if(len==INT_MAX){
        cout<<-1;
    }else{
        cout<<len;
    }


    
}