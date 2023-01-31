#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;    
const int maxArr = (int)1e7;
int prime[maxArr+1];

/*
Viết chương trình đếm xem trong đoạn giữa 2 số a và b có bao nhiêu số là số nguyên tố và tất cả các chữ số của nó cũng là số nguyên tố.

Input Format

Gồm 2 số nguyên dương a và b.

Constraints

1≤a≤b≤10^7

Output Format

Ghi ra số lượng số thỏa mãn trên một dòng.

Sample Input 0

1234 5678

Sample Output 0

26


*/
void sieve(){
    for(int i=0; i<= maxArr; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i=2; i<=sqrt(maxArr); i++){
        if(prime[i]){
            for(int j=i*i; j<=maxArr; j+=i){
                prime[j] = 0;
            }
        }
    }
}
int check(int n){
    int x = n;
    int sum = 0;
    while(x!=0){
        int tmp = x%10;
        if(!prime[tmp]){
            return 0;
        }else{
            sum += tmp;
        }
        x /= 10;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int a,b,cnt=0; cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(prime[i] && check(i)){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}