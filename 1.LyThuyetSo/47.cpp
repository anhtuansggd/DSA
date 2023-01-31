#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Bạn được cung cấp một mảng gồm n số nguyên dương. Nhiệm vụ của bạn là tìm hai số nguyên sao cho ước số chung lớn nhất của chúng càng lớn càng tốt

Input Format

Dòng nhập đầu tiên có số nguyên n: kích thước của mảng. Dòng thứ hai có n số nguyên x1, x2,…, xn: nội dung của mảng.

Constraints

2≤n≤10^6; 1≤xi≤10^6

Output Format

In ước số chung lớn nhất lớn nhất.

Sample Input 0

5
3 14 15 7 9

Sample Output 0

7

Explanation 0

2 số 14 và 7 có ước chung lớn nhất là 7, là ước chung lớn nhất của 2 số trong mảng.
*/

//danh dau
int d[1000005];
//sang cac boi cua mot so tu so lon
int sang(){
    for(int i=1e6; i>=2; i--){
        int cnt = 0;
        //duyet cac so la boi
        for(int j=i; j<=1e6; j+=i){
            if(d[j]){
                cnt += d[j];
            }
            if(cnt >= 2){
                return i;
            }
        }
    }
    return 1;
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){cin>>x; d[x]++;}
    cout<<sang();

    

}