#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Dãy số Fibonacci được định nghĩa như sau: F1 = 0, F2 = 1; Fi = Fi-1 + Fi-2. Hãy viết chương trình in ra số Fibonacci thứ n.

Input Format

Số nguyên dương n

Constraints

1≤n≤10^6

Output Format

Số fibonacci thứ n lấy dư với 1000000007

Sample Input 0

5

Sample Output 0

3

Explanation 0

Các số fibonacci đầu tiên : 0 1 1 2 3 5 8. Vậy số fibonacci thứ 5 là 3
*/

ll F[10000007];
void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i=2; i<10000007;i++){
        F[i] = (F[i-2]%Mod + F[i-1]%Mod)%Mod;
    }
}

int main() {
    int n; cin>>n;
    Fibo();
    cout<<F[n-1];
}