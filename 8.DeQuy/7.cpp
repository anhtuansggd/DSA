#include <bits/stdc++.h>
using namespace std;

/*
Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N.
Input Format

2 số nguyên dương N và K.

Constraints

0≤k≤n≤10.

Output Format

Kết quả của tổ hợp chập K của N.

Sample Input 0

10 2

Sample Output 0

45


*/

int nCk(int n, int k){
    if(k==0 || k==n){
        return 1;
    }else{
        return nCk(n-1, k-1) + nCk(n-1, k);
    }
}

int main() {
    int n,k; cin>>n>>k;
    cout<<nCk(n,k);

    
    return 0;
}