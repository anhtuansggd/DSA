#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của một tam giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.

Input Format

Dòng đầu tiên là số nguyên N Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 5000; 1 ≤ A[i] ≤ 10^9

Output Format

In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.

Sample Input 0

3
3 4 5

Sample Output 0

YES


*/

bool check(int a[],int n){
    for(int i=0; i<n-2; i++){
        int k = a[i];
        int l=i+1, r=n-1;
        while(l<=r){
            if(1ll*a[l]*a[l] + 1ll*a[r]*a[r] == 1ll*k*k){
                return true;
            }else if(1ll*a[l]*a[l] + 1ll*a[r]*a[r] > 1ll*k*k){
                l++;
            }else{
                r--;
            }
        }
    }
    return false;
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){cin>>x;}
    sort(a, a+n, greater<int>());
    if(check(a,n)){
        cout<<"YES";
    }else cout<<"NO";

}