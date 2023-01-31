#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1e9 + 7;

/*
Cho mảng số nguyên gồm N phần tử. Thực hiện in ra các yêu cầu sau đây. (Bài này đúng là được nhé mọi người, TLE không sao cả vì test to quá)

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints

2≤n≤10^6; -10^9≤ai≤10^9

Output Format

Dòng đầu tiên ghi số lớn nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), nếu có nhiều số cùng có giá trị lớn nhất thì lấy vị trí xuất hiện đầu tiên. Dòng thứ 2 ghi số nhỏ nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), nếu có nhiều số cùng có giá trị nhỏ nhất thì lấy vị trí xuất hiện cuối cùng. Dòng thứ 3 ghi ra số lượng số nguyên tố xuất hiện trong dãy. Dòng thứ 4 ghi ra tích lớn nhất của 2 số trong mảng (2 số khi nhân với nhau tạo ra tích lớn nhất). Dòng thứ 5 in ra YES nếu mảng đối xứng, ngược lại in ra NO. Dòng thứ 6 tính tích các số trong mảng, kết quả lấy dư với (10^9+7)

Sample Input 0

6
-10 -10 2 3 4 5

Sample Output 0

5 5
-10 1
3
100
NO
12000


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
    int n; cin>>n;
    int a[n], maxV = INT_MIN, maxIdx=0, min = INT_MAX, minIdx=0, cnt = 0;
    ll res = 1;
    for(int i=0 ;i<n; i++){
        cin>>a[i];
        int x = a[i]; 
        if(ngto(x)){
            cnt++; 
        }
        if(x > maxV){
            maxV = x;
            maxIdx = i;
        }
        if(x <= min){
            min = x;
            minIdx = i;
        }
        res *= x*1ll;
        res %= Mod;
    }
    cout<<maxV<<' '<<maxIdx<<endl;
    cout<<min<<' '<<minIdx<<endl;
    cout<<cnt<<endl;
    int maxV2 = INT_MIN, minV2 = INT_MAX;
    bool fl = true;
    for(int i=0; i<n; i++){
        if(a[i] != a[n-i-1]){
            fl = false;
        }
        if(a[i] > maxV2 && i!=maxIdx){
            maxV2 = a[i];
        }
        if(a[i] < minV2 && i!=minIdx){
            minV2 = a[i];
        }

    }
    cout<<max(1ll*maxV*maxV2, 1ll*min*minV2)<<endl;
    if(fl){cout<<"YES\n";}
    else{cout<<"NO\n";}
    cout<<res;




} 