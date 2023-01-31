#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn tìm ra độ dài của dãy con liên tiếp các phần tử sao cho các phần tử liền kề nhau trong dãy con đều khác nhau. Nếu có nhiều dãy con thỏa mãn, hay in ra dãy con có tổng lớn nhất.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

Output Format

In ra đáp án của bài toán trên 2 dòng. Dòng đầu tiên là độ dài của dãy con dài nhất. Dòng thứ 2 là các phần tử trong dãy con đó.

Sample Input 0

8
1 2 3 4 4 5 6 7

Sample Output 0

4
4 5 6 7


*/
int main() {
    int n; cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++) cin>>a[i];
    a[n] = a[n-1];
    int max_len=1, pos=0, cur_len=1, cur_start=0;
    int max_sum = a[0], cur_sum = a[0];
    for(int i=1; i<=n; i++){ 
        if(a[i]!=a[i-1]){
            cur_sum += a[i];
            cur_len++;
        }else{
            if(cur_len > max_len || cur_len==max_len && cur_sum > max_sum){
                max_sum = cur_sum;
                max_len = cur_len;
                pos = cur_start;
            }
            cur_start = i;
            cur_sum = a[i];
            cur_len = 1;

        }
    }
    cout<<max_len<<endl;
    for(int i=pos; i<pos+max_len; i++){
        cout<<a[i]<<' ';
    }




}