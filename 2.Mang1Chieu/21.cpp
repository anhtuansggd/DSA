#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho dãy A[] chỉ bao gồm các số nguyên dương nhưng không biết trước số phần tử của dãy. Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây: Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ. Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.

Input Format

1 dòng gồm số nguyên, các số cách nhau đúng một khoảng trắng, sau chữ số cuối cùng có thể có khoảng trắng.

Constraints

Số lượng phần tử trong dãy không quá 10^5 1 ≤ A[i] ≤ 10^9

Output Format

In ra YES nếu dãy là dãy ưu thế, ngược lại in NO.

Sample Input 0

2 2 3 5 8 10 20 88

Sample Output 0

YES

Explanation 0

Dãy số có 8 số, số lượng số chẵn trong dãy lớn hơn số lượng số lẻ trong dãy nên dãy là dãy ưu thế.
*/

int main() {
    int cntE=0,cntO=0,cnt=0,n;
    while(cin>>n){
        cnt++;
        if(n%2==0){
            cntE++;
        }else{
            cntO++;
        }
    }
    if(cnt%2==0 && cntE>cntO){
        cout<<"YES";
        return 0;
    }else if(cnt%2==1 && cntE<cntO){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";




}