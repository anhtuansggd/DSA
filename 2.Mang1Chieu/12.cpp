#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố trong dãy và in ra theo thứ tự xuất hiện trong dãy

Input Format

Gồm nhiều dòng chưa các số nguyên trong dãy

Constraints

Dãy không quá 10000 số nguyên không âm. Các số trong dãy là số nguyên không âm không quá 10^9

Output Format

In ra các số nguyên tố trong dãy kèm theo tần suất của nó.

Sample Input 0

2 3 5 3 2 5 1

Sample Output 0

2 2
3 2
5 2


*/

int ngto(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

int main() {
    int tmp;
    vector<int> v;
    map<int, int> mp;
    while(cin>>tmp){
        if(ngto(tmp)){
            v.push_back(tmp);
            mp[tmp]++;
        }
    }
    for(int x:v){
        if(mp[x]!=0){
            cout<<x<<' '<<mp[x]<<endl;
            mp[x] = 0;
        }
    }
}