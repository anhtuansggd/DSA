#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là trộn 2 mảng này thành một mảng và sắp xếp theo thứ tự tăng dần. Độ phức tạp mong muốn là tuyến tính.

Input Format

    Dòng đầu tiên là N và M

    Dòng 2 là N số trong mảng A[]

    Dòng 3 là M số trong mảng B[]

Constraints

    1<=N,M<=10^7

    1<=A[i],B[i]<= 10^9

Output Format

In ra mảng tăng dần sau khi trộn A[] và B[]

Sample Input 0

6 6
1 2 4 4 9 10 
4 4 5 6 6 8 

Sample Output 0

1 2 4 4 4 4 5 6 6 8 9 10 


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
        if(a[i] <= b[j]){
            cout<<a[i]<<' '; i++;
        }else{
            cout<<b[j]<<' '; j++;
        }
    }
    while(i<n){
        cout<<a[i]<<' '; i++;
    }
    while(j<m){
        cout<<b[j]<<' '; j++;
    }


    
}
