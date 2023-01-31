#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[(int)1e7]={0};
/*
Cho mảng A[] gồm n phần tử. Bạn hãy thực hiện làm các công việc sau đây :

    Sắp xếp các phần tử trong mảng theo tần suất giảm dần, nếu 2 số có cùng tần suất thì số nào nhỏ hơn sẽ in ra trước.

    Sắp xếp các phần tử trong mảng theo tần suất giảm dần, nếu 2 số có cùng tần suất thì số nào xuất hiện trước sẽ in ra trước.

Input Format

Dòng đầu tiên đưa vào n là số phần tử của mảng A[]; Dòng tiếp theo là n số A[i] ; Các số được viết cách nhau một vài khoảng trống.

Constraints

1<=n<=10^5; 0<=A[i]<=10^6;

Output Format

Dòng đầu tiên in ra các số được sắp xếp theo yêu cầu 1. Dòng thứ 2 in ra các số được sắp xêp theo yêu cầu 2.

Sample Input 0

10
6 8 4 10 3 4 10 2 4 1 

Sample Output 0

4 4 4 10 10 1 2 3 6 8 
4 4 4 10 10 6 8 3 2 1 

Sample Input 1

10
2 5 6 7 2 1 3 10 3 6 

Sample Output 1

2 2 3 3 6 6 1 5 7 10 
2 2 6 6 3 3 5 7 1 10 


*/
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

bool cmp1(pair<int, int> a, pair<int , int> b){
    return a.second > b.second;
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        if(cnt[a[i]]!=0){
            v.push_back({a[i], cnt[a[i]]});
            cnt[a[i]]=0;
        }
    }
    vector<pair<int, int>> v1(v.begin(), v.end());
    sort(v.begin(), v.end(), cmp);
    for(auto x: v){
        for(int j=0; j<x.second; j++){
            cout<<x.first<<" ";
        }
    }
    cout<<endl;
    stable_sort(begin(v1), end(v1), cmp1);
    for(auto x: v1){
        for(int j=0; j<x.second; j++){
            cout<<x.first<<" ";
        }
    }



    return 0;
}