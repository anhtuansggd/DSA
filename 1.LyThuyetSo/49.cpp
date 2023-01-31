#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Bạn đã từng nghe tới Multinomial coefficient bao giờ chưa? Lý thuyết đó có thể giúp bạn giải quyết được bài toán sau đây. Cho một chuỗi, nhiệm vụ của bạn là tính toán số lượng các chuỗi khác nhau có thể được tạo bằng cách sử dụng các ký tự của nó. Nếu bạn chưa học xâu kí tự, có thể tìm hiểu 1 chút về xâu kí tự sau đó quay trở lại và giải bài tập này nhé !

Input Format

Một chuỗi kí tự chỉ bao gồm các chữ cái từ a-z có độ dài n

Constraints

1≤n≤10^6

Output Format

In ra kết quả lấy dư với (10^9 + 7)

Sample Input 0

aab

Sample Output 0

3


*/

ll gt[1000001];

ll powMod(ll a, ll b, ll m){
    ll res = 1;
    while(b!=0){
        if(b%2==1){
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}


int main(){
    gt[1] = 1;
    for(int i=2; i<=1000001; i++){
        gt[i] = gt[i-1]*i;
        gt[i] %= Mod;
    }
    string s; cin>>s;
    int a[256] = {0};
    for(char c:s){
        a[c]++;
    }
    ll tu = gt[s.length()]%Mod;
    ll mau=1;
    for(int i=0; i<256; i++){
        if(a[i]!=0){
            mau *= gt[a[i]];
            mau %= Mod;
        }
    }
    
    //Little-Fermat Theorem
    ll resM = powMod(mau, Mod-2, Mod);
    cout<<((tu%Mod)*(resM%Mod))%Mod;
    
    return 0;
}