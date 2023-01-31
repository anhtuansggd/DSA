#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Có n quả táo với khối lượng đã biết. Nhiệm vụ của bạn là chia táo thành hai nhóm sao cho sự khác biệt giữa trọng lượng của 2 nhóm là nhỏ nhất.

Input Format

Dòng 1 là số nguyên dương N : số lượng quả táo. Dòng thứ 2 là N số nguyên p1,p2,...,pn là trọng lượng tương ứng của các quả táo.

Constraints

1<=N<=20; 1<=pi<=10^9;

Output Format

In ra độ chênh lệch nhỏ nhất giữa 2 nhóm táo.

Sample Input 0

5
3 2 7 4 1

Sample Output 0

1


*/

int n, a[100];

bool fl = false;

void init(){
    for(int i=1; i<=n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i==0){
        fl = true;
    }
    a[i]++;
}

int main(){
    cin>>n;
    int inpt[n+1];
    for(int i=1; i<=n; i++){
        cin>>inpt[i];
    }


    init();
    ll res = LONG_LONG_MAX;
    while(!fl){
        vector<int> v0, v1;
        for(int i=1; i<=n; i++){
            if(a[i]==0){
                v0.push_back(inpt[i]);
            }else{
                v1.push_back(inpt[i]);
            }
        }
        ll s0=0, s1=0;
        for(int i=0; i<v0.size(); i++){
            s0 += v0[i];
            //cout<<a[v0[i]]<<' '<<v0[i]<<endl;
        }
        for(int i=0; i<v1.size(); i++){
            s1 += v1[i];
        }
        res = min(res, abs(s1-s0));
        sinh();
    }
    cout<<res;

    
}