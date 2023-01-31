#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Nhà Tèo ở gần bờ sông, trên bờ sông có trồng N cây phi lao, tuy nhiên có những cây không thể sống được do thời tiết khắc nghiệt của mùa đông miền Bắc. Một ngày nọ Tèo đi dọc bờ sông và tự hỏi, liệu rằng có thể tìm được K cây phi lao con còn sống liên tiếp dọc bờ sông hay không. Có thể sẽ không tồn tại K cây phi lao con còn sống liên tiếp, vì thế Tèo sẽ chuyển những cây phi lao con còn sống ở những ô khác để tạo ra một dãy các cây phi lao sống liên tiếp. Bạn hãy giúp Tèo di chuyển ít nhất cây phi lao nhất có thể, hoặc xác định rằng không thể di chuyển các cây phi lao còn sống lại gần nhau để tạo ra K cây phi lao liên tiếp còn sống.

Input Format

    Dòng 1 là N và K

    Dòng 2 mô tả N cây phi lao, 0 tương ứng với cây phi lao chết, 1 tương ứng với cây phi lao sống.

Constraints

    1<=K<=N<=10^6

Output Format

In ra số cây phi lao ít nhất cần di chuyển hoặc in ra -1 nếu không thể tạo ra 1 dãy K cây phi lao còn sống.

Sample Input 0

11 3
0 0 0 0 1 0 1 0 0 0 1 

Sample Output 0

1


*/

int main() {
    int n,k,cnt=0,len=0, r_len=1e9; cin>>n>>k; int a[n];
    for(int &x:a){cin>>x; if(x==1){cnt++;}}
    if(cnt<k){
        cout<<-1; return 0;
    }
    vector<int> vt;
    for(int i=0; i<k; i++){
        vt.push_back(a[i]);
        if(a[i]==1){len++;}
        r_len = min(r_len, k-len);
    }
    for(int i=k; i<n; i++){
        if(*vt.begin()==1){len--;}
        vt.erase(vt.begin());
        vt.push_back(a[i]);
        if(a[i]==1){len++;}
        r_len = min(r_len, abs(k-len));    
    }
    cout<<r_len<<endl;

    


}
