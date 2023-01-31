#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Kiểm tra xem một số nguyên không âm N có chia hết cho 11 hay không? Để kiểm tra 1 số có chia hết cho 11 hay không bạn chỉ cần tính tổng các chữ số ở vị trí chẵn, tổng các chữ số ở vị trí lẻ và lấy độ chênh lệch của 2 tổng này chia cho 11, nếu độ chênh lệch này chia hết thì số ban đầu chia hết cho 11. Ví dụ số N = 8580 có tổng các số ở vị trí chẵn là 5, tổng các số ở vị trí lẻ là 16, độ chênh lệch giữa 2 tổng này là 11 vì thế số 8580 chia hết cho 11.

Input Format

Số nguyên không âm N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N chia hết cho 11 ngược lại in ra NO.

Sample Input 0

121

Sample Output 0

YES


*/
bool check(string s){
    ll odd = 0, even = 0;
    for(int i=0; i<s.size();i++){
        if(i%2==0){
            odd += s[i]-'0';
        }else{
            even += s[i]-'0';
        }
    }
    if((odd-even)%11==0){return 1;}
    return 0;
}
int main() {
    string s; cin>>s;
    if(check(s)){
        cout<<"YES"; return 0;
    }else cout<<"NO";
       
   

    
}
