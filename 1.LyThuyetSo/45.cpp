#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Bạn được cung cấp một số nguyên x. Bạn có thể biểu diễn x bằng cách tổng của các số trong các số 11,111,1111,11111,… ( Các số mà bản thân nó chỉ chứa các chữ số 1)?(Bạn có thể sử dụng bất kỳ số nào trong số chúng bất kỳ số lần nào). Ví dụ, 33 = 11 + 11 + 11 144 = 111 + 11 + 11 + 11

Input Format

Số nguyên dương N

Constraints

1≤n≤10^9

Output Format

Nếu bạn có thể tạo x bởi các số 11,111,1111,...., hãy xuất "YES" (không có dấu ngoặc kép). Nếu không, xuất "NO".

Sample Input 0

144

Sample Output 0

YES

Sample Input 1

69

Sample Output 1

NO


*/

int main(){
    int n; cin>>n;
    for(int i=0; i<=n/111; i++){
        int x = n - i*111;
        if(x%11==0){
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
    
    return 0;
}