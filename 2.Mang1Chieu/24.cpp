#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho dãy số A[] gồm có N phần tử và số nguyên X, hãy in ra vị trí xuất hiện đầu tiên và vị trí xuất hiện cuối cùng của X trong mảng, trong trường hợp X không xuất hiện trong mảng thi in ra -1.

Input Format

Dòng đầu tiên là số nguyên N và X. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i], X ≤ 10^9;

Output Format

In ra kết quả của bài toán.

Sample Input 0

10 5
1 2 3 4 5 6 7 5 2 8

Sample Output 0

5 8

Sample Input 1

10 9
1 2 3 5 6 7 8 2 1 21

Sample Output 1

-1 -1


*/

int main() {
    int n,x; cin>>n>>x;
    int a[n];
    int first_pos = -1, last_pos = -1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==x){
            if(first_pos==-1){first_pos = i+1;}
             last_pos = i+1;
        }
    }
    cout<<first_pos<<' '<<last_pos;

} 