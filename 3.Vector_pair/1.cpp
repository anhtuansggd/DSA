#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;


/*
Cho vector và 2 thao tác. Thao tác 1 : Thêm 1 phần tử và cuối vector. Thao tác 2 : Xóa phần tử khỏi cuối vector nếu vector không rỗng. Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra EMPTY, ngược lại in ra các phần tử trong vector trên 1 dòng.

Input Format

Dòng 1 là N : số thao tác được thực hiện. N dòng tiếp theo mỗi dòng mô tả thao tác, nếu thao tác là 1 sẽ có thêm phần tử được thêm vào cuối.

Constraints

1<=N, M<=200; Các phần tử thêm vào vector là số nguyên int 32bit.

Output Format

In ra EMPTY nếu vector rỗng, ngược lại in ra các phần tử trong vector trên 1 dòng.

Sample Input 0

7
1 58
2
2
1 52
1 81
1 12
1 2

Sample Output 0

52 81 12 2 


*/

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


int main(){
    int n,x,tmp; cin>>n;
    vector<int> vt;
    while(n--){
        cin>>x;
        if(x==1){
            cin>>tmp;
            vt.pb(tmp);
        }else{
            if(vt.size()!=0){
                vt.pop_back();
            }
        }
    }
    if(vt.empty()){
        cout<<"EMPTY";
    }else{
        for(int x:vt){
            cout<<x<<" ";
        }
    }
}   