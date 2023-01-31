#include <bits/stdc++.h>
using namespace std;
using ll = long long;


/*
Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7.

Input Format

2 số n,k

Constraints

1 ≤n,k≤10^9

Output Format

In ra thừa số nguyên tố thứ k của n, nếu n không có thừa số nguyên tố thứ k thì in ra -1.

Sample Input 0

28 3

Sample Output 0

7

Sample Input 1

8 5

Sample Output 1

-1


*/
int pt(int n, int k){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                k--;
                if(k==0){
                    return i;
                }
            }
        }
    }
    if(n>1 && k==1){return n;}
    return -1;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin>>n>>k;
    cout<<pt(n,k);
}   