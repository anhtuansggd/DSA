#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[10];

/*
Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2, 3, 4}.

Input Format

Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng tiếp theo là n số A[i] ; Các số được viết cách nhau một vài khoảng trống.

Constraints

1<=n<=10^5; 0<=A[i]<=10^6;

Output Format

In ra các chữ số xuất hiện trong các số của mảng A theo thứ tự tăng dần

Sample Input 0

3
976117 988196 993766 

Sample Output 0

1 3 6 7 8 9 


*/
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        while(a[i]>0){
            cnt[a[i]%10]++;
            a[i]/=10;
        }
    }
    for(int i=0; i<10; i++){
       if(cnt[i] != 0){
        cout<<i<<" ";
       }
    }
    

    return 0;
}