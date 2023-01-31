#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

/*
Ở bài tập này yêu cầu bạn kiểm tra số nguyên tố với nhiều trường hợp khác nhau.

Input Format

Dòng đầu tiên là số lượng test case T; Mỗi test case là một số nguyên n

Constraints

1≤T≤1000; 0≤n≤10^6

Output Format

In ra kết quả mỗi test case trên một dòng. In YES nếu n là số nguyên tố, ngược lại in NO.

Sample Input 0

20
364
12401
4152
4624
12783
1868
14521
24213
4740
19037
6992
9390
8929
27797
18685
13291
11424
10292
3534
30641

Sample Output 0

NO
YES
NO
NO
NO
NO
NO
NO
NO
YES
NO
NO
YES
NO
NO
YES
NO
NO
NO
NO


*/


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 1000000; 
    bool prime[n];
    for(int i=0; i<n; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for(int i=2; i<=sqrt(n); i++){
        for(int j = i*i; j<=n; j+=i){
            prime[j] = false;
        }
    }
    int t; cin>>t;
    while(t!=0){
        int x; cin>>x;
        if(prime[x]==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
        
    }

    
    return 0;
}