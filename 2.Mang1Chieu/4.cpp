#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá 100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé theo đúng thứ tự mọi người trong hàng không?

Input Format

Dòng đầu tiên chứa số nguyên n - số người trong hàng. Dòng tiếp theo chứa n số nguyên, mỗi số bằng 25, 50 hoặc 100 - giá trị của các tờ tiền mà mọi người có

Constraints

1≤n≤10^6

Output Format

In YES nếu người bán hàng có thể bán và trả tiền thừa cho mọi người trong hàng, ngược lại in NO

Sample Input 0

5
25 25 25 50 50 

Sample Output 0

YES

Sample Input 1

2
50 25

Sample Output 1

NO


*/
int main() {
    int n; cin>>n;
    int a[n];
    int cnt25 = 0, cnt50 = 0;
    for(int &x:a){cin>>x;}
    for(int i=0; i<n; i++){
        if(a[i]==25){
            cnt25++;
        }else if(a[i]==50){
            if(cnt25==0){
                cout<<"NO";
                return 0;
            }
            cnt25--;
            cnt50++;
        }else if(a[i]==100){
            if(cnt25==0 || cnt25*25 + cnt50*50 <= 75){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";


   
}