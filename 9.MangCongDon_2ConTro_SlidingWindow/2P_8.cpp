#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà số lượng phần từ khác nhau trong mảng con này không vượt quá K.

Input Format

    Dòng đầu tiên là N và K

    Dòng thứ 2 là N số trong mảng A[]

Constraints

    1<=K<=N<=10^5

    1<=A[i]<=10^6

Output Format

In ra số lượng mảng con thỏa mãn đề bài

Sample Input 0

11 3
5 4 4 5 4 4 2 1 5 2 4 

Sample Output 0

42


*/
int main() {
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x:a){cin>>x;}
    map<int, int> mp;
    int l=0;
    ll res=0;
    for(int r=0; r<n; r++){
        mp[a[r]]++;
        while(mp.size() > k){
            mp[a[l]]--;
            if(mp[a[l]]==0){ mp.erase(a[l]);}
            l++;
        }
        res += r-l+1;
    }
    cout<<res;
    
}
