#include <bits/stdc++.h>
using namespace std;

/*
Tính n giai thừa bằng đệ quy.

Input Format

Số nguyên dương N.

Constraints

0≤n≤10;

Output Format

Kết quả của N!

Sample Input 0

6

Sample Output 0

720


*/

int facto(int n){
    if(n==0){
        return 1;
    }
    else
        return n*facto(n-1);
}

int main() {
    int n; cin>>n;
    cout<<facto(n);

    
    return 0;
}