#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Bài 1. Cho mảng A[] gồm N phần tử, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau :

    Sắp xếp số lượng chữ số chẵn xuất hiện trong số tăng dần, nếu 2 số còn cùng số lượng chữ số chẵn thì số nhỏ hơn in trước.

    Sắp xếp theo số lượng chữ số lẻ xuất hiện trong số ban đầu tăng dần, nếu 2 số có cùng số lượng chữ số lẻ thì số nào xuất hiện trước sẽ in ra trước. (Bài này các bạn làm theo mảng và vector để luyện tập thêm)

Input Format

    Dòng 1 là N : số lượng phần tử trong mảng

    Dòng 2 là N số trong mảng

Constraints

    1<=N<=10^5

    0<=A[i]<=10^9

Output Format

    Dòng 1 in ra các phần tử sau khi sắp xếp theo yêu cầu 1

    Dòng 2 in ra các phần tử sau khi sắp xếp theo yêu cầu 2

Sample Input 0

12
4 9 5 7 15 4 13 15 1 8 4 15 

Sample Output 0

1 5 7 9 13 15 15 15 4 4 4 8 
4 4 8 4 9 5 7 1 15 13 15 15 


*/
int chan(int n){
    int cnt = 0;
    if(n==0){return 1;}
    while(n){
        if((n%10)%2==0){
            cnt++;
        }
        n/=10;
    }
    return cnt;
}

int le(int n){
    int cnt = 0;
    while(n){
        if((n%10)%2==1){
            cnt++;
        }
        n/=10;
    }
    return cnt;
}

int main() {
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a, a+n, [](int a, int b)->bool{
        if(chan(a) != chan(b)){
            return chan(a) < chan(b);
        }else{
            return a < b;
        }
    });
    for(int &x:a){cout<<x<<' ';}
    cout<<endl;
    stable_sort(b, b+n, [](int a, int b)->bool{
        return le(a) < le(b);
    });
    for(int &x:b){cout<<x<<' ';}

}
