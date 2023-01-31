#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Mod = 1e9+7;

/*
Cho vector V có N phần tử, nhiệm vụ của bạn là sắp xếp các phần tử trong vector theo thứ tự tăng dần, giảm dần sau đó in ra bằng cách dùng iterator.

Input Format

Dòng 1 là N : số lượng phần tử trong vector. Dòng 2 là N số trong vector.

Constraints

1<=N<=1000. Các phần tử của vector là số nguyên 32bit.

Output Format

Dòng 1 in ra vector tăng dần, dòng 2 in ra vector giảm dần.

Sample Input 0

8
992 763 670 344 67 268 298 852 

Sample Output 0

67 268 298 344 670 763 852 992 
992 852 763 670 344 298 268 67 


*/

int main(){
    int n; cin>>n;
    vector<int> vt(n);
    for(int i=0; i<n; i++){
        cin>>vt[i];
    }
    sort(vt.begin(), vt.end());
    for(vector<int>::iterator it = vt.begin(); it!=vt.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(vt.begin(), vt.end(), greater<int>());
    for(vector<int>::iterator it = vt.begin(); it!=vt.end(); it++){
        cout<<*it<<" ";
    }
}   