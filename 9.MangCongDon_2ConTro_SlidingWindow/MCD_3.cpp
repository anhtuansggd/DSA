#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Tèo hiện tại đã bỏ làm lập trình viên và trở về về quê trồng rau nuôi cá, anh ta có một mảnh vườn hình chữ nhật có kích thước NxM. Anh ta chia vườn của mình thành NXM ô vuông và trồng vào đó một cây cà rốt, tới vụ thu hoạch có những cây cà rốt bị chết và có những cây cà rốt có củ, anh ta muốn biết với mỗi mảnh vườn hình chữ nhật bắt đầu từ hàng x1 tới hàng x2 và từ cột y1 tới cột y2 thì số cà rốt thu hoạch được là bao nhiêu.

Biết rằng mảnh vườn được mô tả bởi một ma trận nhị phân, 0 tương ứng với cây cà rốt chất và 1 tương ứng với cây cà rốt có củ.

Input Format

    Dòng 1 là N và M

    N dòng tiếp theo mỗi dòng M số mô tả mảnh vườn

    Dòng tiếp theo là Q : số lượng truy vấn

    Q dòng tiếp theo mỗi dòng gồm 4 số : x1, x2, y1, y2

Constraints

    1<=N,M<=1000

    1<=Q<=10^5

    1<=x1,x2<=N, 1<=y1,y2<=M

Output Format

Đối với mỗi truy vấn in ra số lượng cà rốt thu hoạch

Sample Input 0

8 8
1 1 0 0 0 1 1 1 
1 0 0 0 1 1 1 1 
0 1 1 1 0 0 1 0 
1 1 1 1 0 1 1 0 
1 1 1 1 1 0 1 1 
1 0 0 1 0 1 0 1 
0 0 0 0 1 0 1 0 
1 1 0 0 0 1 0 1 
3
2 3 1 7
2 2 2 7
1 2 1 8

Sample Output 0

8
3
10


*/

int n,m;
int a[1005][1005];
int prefix[1005][1005];

int main() {
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + a[i][j];
        }
    }
    int q; cin>>q;
    while(q--){
        int x1,x2,y1,y2; cin>>x1>>x2>>y1>>y2;
        cout<<prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1] <<endl;
    }



    
}
