#include<bits/stdc++.h>
using namespace std;

int n, a[1005], fl=0;

/*
Cho mảng số nguyên gồm N phần tử, các phần tử trong mảng không quá 100. Hãy liệt kê các hoán vị của các phần tử khác nhau trong mảng theo thứ tự ngược.

Input Format

Dòng đầu tiên là N; Dòng thứ 2 là các phần tử trong mảng;

Constraints

1<=N<=15;

Output Format

In ra các hoán vị ngược của các phần tử khác nhau trong mảng.

Sample Input 0

2
1 2

Sample Output 0

2 1
1 2


*/
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
        fl=1;
    }else{
        int j=n;
        while(a[i]>a[j]){j--;}
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}
int main(){
    cin>>n;
    set<int> st;
    vector<int> inpt;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        if(!st.count(x)){
            inpt.push_back(x);
            st.insert(x);
        }
    }
    sort(inpt.begin(), inpt.end());
    n = inpt.size();
    init();
    vector<string> vt;    
    while(!fl){
        string s = "";
        for(int i=1; i<=n; i++){
            s+=to_string(inpt[a[i]-1])+' ';
        }
        vt.push_back(s);
        sinh();
    }
    for(auto it=vt.rbegin(); it!=vt.rend(); it++){
        cout<<*it<<endl;
    }
    return 0;
}