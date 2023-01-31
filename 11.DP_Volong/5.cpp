#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;
const int Mod = (int)1e9+7;

/*
Cho 2 số nguyên L, R, hãy đếm xem trong đoạn từ L tới R có bao nhiêu số nguyên tố.

Gợi ý :

    Bước 1 : Sàng số nguyên tố

    Bước 2 : Gọi F[i] là số các nguyên tố từ 0 tới i, khi đó số các số nguyên tố từ L tới R là F[R] - F[L - 1]

Input Format

    Dòng 1 là số bộ test T

    T dòng tiếp theo mỗi dòng là 2 số nguyên không âm L, R

Constraints

    1<=T<=10000

    0<=L<=R<=10^6

Output Format

Đưa ra kết quả của mỗi test trên 1 dòng

Sample Input 0

5
3 19
4 65
4 44
1 17
1 7

Sample Output 0

7
16
12
7
4


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
        int l,r; cin>>l>>r;
        cout<<ngto[r]-ngto[l-1]<<endl;
    }
}
