#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

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

/*
Với mỗi số nguyên dương N, số M được coi là đặc biệt của N nếu M được tạo ra bằng tổng các luỹ thừa không âm khác nhau của N. Ví dụ N=4 thì M=17 là số đặc biệt vì 4^0+4^2=17 Viết chương trình nhập số N và số K. Sau đó in ra số đặc biệt thứ K của N nếu sắp xếp các số đặc biệt của N theo thứ tự tăng dần. Kết quả có thể rất lớn, hãy in ra theo modulo (10^9)+7.

Input Format

1 dòng chứa 2 số N và K

Constraints

2<=N<=10^9; 1<=K<=10^9

Output Format

Với mỗi bộ test in ra số đặc biệt thứ K của N theo modulo 10^9+7.

Sample Input 0

3 4

Sample Output 0

9

Explanation 0

Với N =3 thì dãy số đặc biệt là 1, 3, 4, 9, 10....

Sample Input 1

105 564

Sample Output 1

3595374


*/

/*
If n=3, k = 4, then the series = 1,3,4,9,10
or 3^0, 3^1, 3^0 + 3^1, 3^2, 3^2 + 3^0, 3^2 + 3^1 (12)
or 1*3^0, 1*3^1, 1*3^0 + 1*3^1, 1*3^2, 1*3^2 + 1*3^0, 1*3^2 + 1*3^1 (12)
or 1*3^0 + 0*3^1 + 0*3^2, 0*3^1 + 1*3^1 + 0*3^2, ...
-> start with binary mod from k 
4%2=0, 4/2=2;
2%2=0, 2/2=1;
1%2=1, 1/2=0;
-> 100
*/


int main(){
    int n,k; cin>>n>>k;
    ll res = 0, tmp = 1;
    while(k){
        if(k%2==1){
            res += tmp;
            res %= Mod;
        }
        tmp = (tmp*n)%Mod;
        k/=2;
    }
    cout<<res;




}    