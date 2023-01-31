#include <bits/stdc++.h>
#include <deque>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;
int cnt = 0, a[1000],n;
bool cot[10005], xuoi[10005], nguoc[10005];

/*
Cho một bàn cờ vua có kích thước n * n. Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

Input Format

Dòng duy nhất chứa n là kích thước của bàn cờ.

Constraints

1<=N<=12

Output Format

In ra số cách xếp hậu hợp lệ

Sample Input 0

8

Sample Output 0

92


*/

void Try(int i){
    for(int j=1; j<=n; j++){
        if(cot[j]==false && xuoi[i-j+n]==false && nguoc[i+j-1]==false){
            a[i] = j;
            cot[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
            if(i==n){
                cnt++;
            }else{
                Try(i+1);
            }
            cot[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;

        }
    }
}
int main() {
    memset(cot, false, sizeof(cot));
    memset(xuoi, false, sizeof(xuoi));
    memset(nguoc, false, sizeof(nguoc));
    cin>>n;
    Try(1);
    cout<<cnt;
    
}
