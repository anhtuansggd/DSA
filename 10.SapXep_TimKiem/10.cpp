#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) :

    Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.

    Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1.

    Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.

    Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.

    Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

Input Format

Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

Constraints

1<=N<=10^6; 0<=A[i],X<=10^6;

Output Format

In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

Sample Input 0

10 1160
19 1600 2172 2921 3409 4185 4639 6098 6744 9192 

Sample Output 0

-1
-1
1
1
0


*/
int bS1(int a[], int n, int x){
    int l=0, r=n-1, res=-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] == x){
            res = m;
            r = m-1;
        }else if(a[m] > x){
            r = m-1;
        }else{
            l = m+1;
        }
    }
    return res;
}

int bS2(int a[], int n, int x){
    int l=0, r=n-1, res=-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] == x){
            res = m;
            l = m+1;
        }else if(a[m] > x){
            r = m-1;
        }else{
            l = m+1;
        }
    }
    return res;
}

int bS3(int a[], int n, int x){
    int l=0, r=n-1, res=-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] >= x){
            res = m;
            r = m-1;
        }else{
            l = m+1;
        }
    }
    return res;
}

int bS4(int a[], int n, int x){
    int l=0, r=n-1, res=-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] > x){
            res = m;
            r = m-1;
        }else{
            l = m+1;
        }
    }
    return res;
}

int main() {
    int n,x; cin>>n>>x;
    int a[n]; for(int &x:a){cin>>x;}
    cout<<bS1(a,n,x)<<'\n';
    cout<<bS2(a,n,x)<<'\n';
    cout<<bS3(a,n,x)<<'\n';
    cout<<bS4(a,n,x)<<'\n';
    if(bS1(a,n,x) != -1 && bS2(a,n,x) != -1){
        cout<<bS2(a,n,x)-bS1(a,n,x)+1;
    }else{
        cout<<0;
    }
    
}
