#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là đối với mỗi phần tử trong mảng B[] hãy đếm xem trong mảng A[] có bao nhiêu phần tử nhỏ hơn nó.

Input Format

    Dòng đầu tiên là N và M

    Dòng 2 là N số trong mảng A[]

    Dòng 3 là M số trong mảng B[]

Constraints

    1<=N,M<=10^7

    1<=A[i],B[i]<= 10^9

Output Format

In ra đáp án của bài toán

Sample Input 0

6 7
2 3 6 6 6 8 
5 5 5 6 6 7 10 

Sample Output 0

2 2 2 2 2 5 6 


*/

int main() {
    int n,m; cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]>=b[j]){
            cout<<i<<' ';
            j++;
        }else{
            i++;
        }
    }
    while(j<m){
        cout<<i<<' '; j++;
    }


    
}
