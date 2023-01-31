#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Mod = 1000000007;

/*
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của các số từ 1 tới N theo thứ tự ngược.

Input Format

Dòng duy nhất chứa số nguyên dương N.

Constraints

1<=N<=10;

Output Format

In ra các hoán vị của N phần tử theo thứ tự ngược

Sample Input 0

3

Sample Output 0

321
312
231
213
132
123


*/

int n, a[100];
bool fl = false;
void init(){
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
}

void sinh(){
    int i=n-1;
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        fl = true;
    }else{
        int j=n;
        while(j>=1 && a[i]>a[j]){
            j--;
        }
        swap(a[i],a[j]);
        sort(a+i+1, a+n+1);
    }
}

int main(){
    cin>>n;
    init();
    vector<string> vt;
    while(!fl){
        string tmp ="";
        for(int i=1; i<=n; i++){
            tmp += (a[i]+'0');
        }
        vt.push_back(tmp);
        sinh();
    }
    reverse(vt.begin(), vt.end());
    for(string s:vt){
        cout<<s<<endl;
    }



    
}