#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

Input Format

Dòng đầu tiên ghi số n là số lượng phần tử của 2 dãy. Dòng tiếp theo ghi n số nguyên dương của dãy A. Dòng tiếp theo ghi n số nguyên dương của dãy B.

Constraints

1≤n≤10^5; 1≤ai,bi≤10^9

Output Format

In ra kết quả theo yêu cầu của bài toán

Sample Input 0

4
4 2 7 1
5 6 2 8

Sample Output 0

1 8 2 6 4 5 7 2


*/
int main() {
    int n; cin>>n;
    int a[n], b[n];
    for(int &x:a){cin>>x;}
    for(int &x:b){cin>>x;}
    sort(a,a+n);
    sort(b, b+n, greater<int>());
    int c[2*n];
    int idxO = 0, idxE=0;
    for(int i=0; i<2*n; i++){
        if(i%2==0){
            c[i] = a[idxO];
            idxO++;
        }else{
            c[i] = b[idxE];
            idxE++;
        }
    }
    for(int x:c){cout<<x<<' ';}

}