#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho số nguyên dương N được biểu diễn được dạng số nhị phân, hãy kiểm tra xem N có chia hết cho 2^K hay không, Ví dụ N = 11000 (24 hệ thập phân) chia hết cho 2^3.

Input Format

Dòng đầu tiên là số N có không quá 1000 bit. Dòng thứ 2 là số nguyên dương K.

Constraints

N có không quá 1000 bit. 1<=K<=1000.

Output Format

In ra YES nếu N chia hết cho 2^K, ngược lại in ra NO.

Sample Input 0

101010010000
3

Sample Output 0

YES


*/

bool check(string s, int k){
    if(s.size()<k){return 0;}
    // trong k bit o cuoi neu co so == 1 thi se khong chia het cho 2^k
    for(int i=0; i<k;i++){
        if(s[s.size()-1-i]-'0' == 1){return 0;}
    }
    return 1;
}
int main() {
    string s; cin>>s;
    int k; cin>>k;
    if(check(s,k)){
        cout<<"YES";
    }else cout<<"NO";
    
       
   

    
}
