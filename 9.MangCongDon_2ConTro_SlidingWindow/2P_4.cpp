#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Nhân dịp lễ Giáng Sinh 2022, 28Tech tổ chức phát quà cho các bạn nhỏ. Có N món quà được xếp thành hàng ngang, mỗi món quà đều có khối lượng cho trước. Tèo là một đứa trẻ cũng như nhiều đứa trẻ khác chỉ muốn có càng nhiều phần quà càng tốt, không cần biết tới khối lượng của từng mốn quà nặng nhẹ ra sao.

Tuy nhiên chiếc túi của Tèo chỉ mảng được trọng lượng tối đa là S. Bạn hãy xác định xem số lượng phần quà mà Tèo có thể lựa chọn tối đa là bao nhiêu để có thể không vượt quá trọng lượng tối đa mà cái túi có thể chịu được. Ngoài ra trong lúc chọn quà Tèo chỉ có thể chọn các phần quà xếp cạnh nhau mà thôi.

Input Format

    Dòng đầu tiên là N và S

    Dòng thứ 2 là trọng lượng của N phần quà

Constraints

    1<=N<=10^6

    1<=S<=10^9

    Trọng lượng các phần quà là số nguyên dương không quá 10^6

Output Format

In ra số phần quà tối đa mà Tèo có thể lấy được

Sample Input 0

11 10
3 1 4 1 5 3 4 1 5 2 2 

Sample Output 0

4


*/

int main() {
    int n,s; cin>>n>>s;
    int a[n];
    for(int &x:a){cin>>x;}
    int l=0,r=0,sum = 0,cnt = 0,mx_cnt=0;
    for(r=0; r<n; r++){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        cnt = r-l+1;
        mx_cnt = max(cnt,mx_cnt);
    }
    cout<<mx_cnt;

    
}
