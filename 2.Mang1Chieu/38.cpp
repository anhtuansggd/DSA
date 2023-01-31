#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;
const int maxn = 1e6+5;
int prime[maxn];

/*
Cho Q truy vấn, mỗi truy vấn yêu cầu bạn in ra số lượng số nguyên tố từ L tới R. (Đừng duyệt từ L tới R rồi đếm nhé)

Input Format

Dòng đầu tiên là Q; Q dòng tiếp theo mỗi dòng là 2 số L, R

Constraints

1<=Q<=10^4; 1<=L,R<=10^6;

Output Format

Với mỗi truy vấn in ra số lượng số nguyên tố trong đoạn [L, R]

Sample Input 0

9
3 17
1 11
2 18
1 15
4 15
4 18
4 17
2 12
4 20

Sample Output 0

6
5
7
6
4
5
5
5
6


*/
void sang(){
    for(int i=0; i<maxn; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i=2; i<=sqrt(maxn); i++){
        for(int j=i*i; j<maxn; j+=i){
            prime[j]=0;
        }
    }
}

int main() {
    sang();
    map<int, int> mp;
    int sum = 0;
    for(int i=0; i<maxn; i++){
        if(prime[i]){
            sum++;
            mp[i] = sum;
        }
        mp[i] = sum;
    }
    int n; cin>>n;
    while(n--){
        int a,b; cin>>a>>b;
        cout<<mp[b]-mp[a-1]<<endl;
    }
}