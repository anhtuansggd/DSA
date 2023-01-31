#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước và giảm dần, các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n Dòng thứ 2 là các phần tử ai trong mảng

Constraints

1≤n≤10^6; 1≤ai≤10^9

Output Format

In ra dãy đã được sắp xếp

Sample Input 0

10
1 2 3 9 7 4 8 6 10 5

Sample Output 0

9 7 5 3 1 2 4 6 8 10


*/
bool comp(int a, int b){
    int r1 = a%2, r2 = b%2;
    if(r1==r2){
        if(r1==0 && r2==0){
            return a < b;
        }else{
            return a > b;
        }
    }else{
        if(r1==0 && r2 == 1){
            return false;
        }else{
            return true;
        }
    }
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int &x:a){cin>>x;}
    sort(a, a+n, comp);
    for(int &x:a){cout<<x<<' ';}

   
}