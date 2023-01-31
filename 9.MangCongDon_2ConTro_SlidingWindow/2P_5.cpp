#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Nhân dịp lễ Giáng Sinh 2022, 28Tech tổ chức phát quà cho các bạn nhỏ. Có N món quà được xếp thành hàng ngang, mỗi món quà đều có khối lượng cho trước. Tí là một đứa trẻ không như nhiều đứa trẻ khác, Tí chỉ muốn chọn ít phần quà càng tốt miễn là tổng các phần quà này lớn hơn hoặc bằng S. Tí chỉ có thể lựa chọn các phần quà đặt cạnh nhau, bạn hãy xác định xem Tí có thể chọn tối thiểu bao nhiêu phần quà để tổng khối lượng của các phần quà lớn hơn hoặc bằng S.

Input Format

    Dòng đầu tiên là N và S

    Dòng thứ 2 là trọng lượng của N phần quà

Constraints

    1<=N<=10^6

    1<=S<=10^9

    Trọng lượng các phần quà là số nguyên dương không quá 10^6

Output Format

In ra số lượng phần quà ít nhất có thể hoặc in ra -1 nếu không tồn tại đáp án.

Sample Input 0

14 14
4 4 5 1 3 1 3 4 1 1 5 4 1 4 

Sample Output 0

4


*/

int main() {
    int n,s; cin>>n>>s;
    int a[n];
    for(int &x:a){cin>>x;}
    int l=0,r=0,cnt = INT_MAX;
    ll sum = 0;
    for(r=0; r<n; r++){
        sum += a[r];
        while(sum >= s){
            cnt = min(cnt, r-l+1);
            sum -= a[l]; l++;
        }
    }
    if(cnt!=INT_MAX){
        cout<<cnt;
    }else cout<<-1;

    
}
