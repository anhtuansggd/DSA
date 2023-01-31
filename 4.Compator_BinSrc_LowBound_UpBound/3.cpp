#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử ĐÃ SẮP XẾP TĂNG DẦN và số nguyên X, nhiệm vụ của bạn là :

        In ra chỉ số đầu tiên của phần tử >= X trong mảng, nếu không có phần tử nào >=X thì in ra -1. 
        In ra chỉ số đầu tiên của phần tử > X trong mảng, nếu không có phần tử nào > X thì in ra - 1.
        In ra chỉ số đầu tiên của phần tử X trong mảng, nếu X không tồn tại in ra -1. 
        In ra chỉ số cuối cùng của phần tử X trong mảng, nếu X không tồn tại in ra -1. 
        Từ kết quả của 3 và 4 in ra số lần xuất hiện của X trong mảng. 

    CHÚ Ý : Bạn code với 2 trường hợp, sử dụng mảng và vector, chỉ sử dụng hàm lower_bound và upper_bound

Input Format

    Dòng 1 là N : số lượng phần tử trong mảng

    Dòng 2 là N số trong mảng

Constraints

    1<=N<=10^5

    0<=A[i]<=10^9

Output Format

In ra 5 dòng kết quả của 5 yêu cầu

Sample Input 0

12 8
2 3 4 4 5 6 8 8 8 8 10 10 

Sample Output 0

6
10
6
9
4


*/
int main() {
    int n,x; cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    auto it = lower_bound(a, a+n, x);
    if((it-a)==n){
        cout<<-1<<endl;
    }else{
        cout<<(it-a)<<endl;
    }

    auto it1 = upper_bound(a, a+n, x);
    if((it1-a)==n){
        cout<<-1<<endl;
    }else{
        cout<<(it1-a)<<endl;
    }

    if((a[(it-a)])!=x){
        cout<<-1<<endl;
    }else{
        cout<<(it-a)<<endl;
    }

    if(a[(it1-a-1)]!=x){
        cout<<-1<<endl;
    }else{
        cout<<(it1-a-1)<<endl;
    }
    cout<<(it1-it);


    
}
