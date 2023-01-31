#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng A[] gồm N phần tử và số nguyên dương X, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau :

    Sắp xếp các phần tử trong mảng theo abs của hiệu của các phần tử này với X tăng dần(tính trị tuyệt đối của A[i] với X rồi sắp tăng dần). Nếu có 2 phần tử có cùng giá trị sắp xếp này thì số nào nhỏ hơn sẽ in trước.

    Sắp xếp so cho các phần tử là số chẵn đứng trước, các phần tử là số lẻ đứng sau, trong đó chẵn tăng dần, lẻ giảm dần với 1 comparator duy nhất, không tách mảng.

Input Format

    Dòng 1 là N và X : số lượng phần tử trong mảng và số X

    Dòng 2 là N số trong mảng

Constraints

    1<=N<=10^5

    0<=A[i], X<=10^9

Output Format

    Dòng 1 in ra các phần tử sau khi sắp xếp theo yêu cầu 1

    Dòng 2 in ra các phần tử sau khi sắp xếp theo yêu cầu 2

Sample Input 0

14 26
83 86 49 15 31 81 33 10 77 38 49 86 71 28 

Sample Output 0

28 31 33 15 38 10 49 49 71 77 81 83 86 86 
10 28 38 86 86 83 81 77 71 49 49 33 31 15 


*/

int c;
bool cmp(int i, int y){
    int x1 = abs(i-c), x2 = abs(y-c);
    if(x1 != x2){
        return x1 < x2;
    }else return i < y;
}

bool cmp1(int a, int b){
    if(a%2==0 && b%2==0){
        return a<b;
    }else if(a%2==1 && b%2==1){
        return a>b;
    }else if(a%2==0 && b%2==1){
        return 1;
    }else return 0;
}
int main() {
    int n; cin>>n>>c;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a, a+n, cmp);
    for(int &x:a){cout<<x<<' ';}
    cout<<endl;
    sort(b, b+n, cmp1);
    for(int &x:b){cout<<x<<' ';}

}
