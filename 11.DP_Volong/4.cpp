#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;

/*
Cho số nguyên dương N, hãy đếm xem trong đoạn từ 0 tới N có bao nhiêu số nguyên tố. Hướng dẫn :

    Bước 1 : Sàng số nguyên tố

    Bước 2 : Gọi F[i] là số lượng các số nguyên tố từ 0 tới i, xây dựng mảng F[i] sau khi sàng

Input Format

    Dòng 1 là số bộ test T

    T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N

Constraints

    1<=T<=10000

    0<=N<=10^6

Output Format

Đưa ra kết quả của mỗi test trên 1 dòng

Sample Input 0

5
39
68
26
87
6

Sample Output 0

12
19
9
23
3


*/

int a[10000007],ngto[10000007];

void sang(){
    a[0] = a[1] = 0;
    for(int i=2; i<10000007; i++){
        a[i] = 1;
    }
    for(int i=2; i<=i*i; i++){
        if(a[i]){
            for(int j=i*i; j<10000007; j+=i){
                a[j] = 0;
            }
        }
    }

}


int main() {
    sang();
    int cnt = 0;
    for(int i=0; i<10000007; i++){
        if(a[i]){
            cnt++;
        }
        ngto[i] = cnt;
    }
    int n; cin>>n;
    while(n--){
        int k; cin>>k;
        cout<<ngto[k]<<endl;
    }
}
