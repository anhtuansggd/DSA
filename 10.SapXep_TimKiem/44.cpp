#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/*
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,k; cin>>n>>k ;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l=0, cur_cnt=0;
    ll res=0;
    map<int, int> mp;
    for(int r=0; r<n; r++){
        mp[a[r]]++;
        if(mp[a[r]]==1){
            cur_cnt++;
        }
        while(cur_cnt > k){
            mp[a[l]]--;
            if(mp[a[l]]==0){cur_cnt--;}
            l++;
        }
        res += r-l+1;
    }
    cout<<res;

}    
*/
int main(){
    int n,k; cin>>n>>k ;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l=0, cur_cnt=0;
    ll res=0;
    map<int, int> mp;
    for(int r=0; r<n; r++){
        mp[a[r]]++;
        if(mp[a[r]]==1){
            cur_cnt++;
        }
        while(cur_cnt > k){
            mp[a[l]]--;
            if(mp[a[l]]==0){cur_cnt--;}
            l++;
        }
        res += r-l+1;
    }
    cout<<res;

}    