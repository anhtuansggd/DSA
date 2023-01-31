#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng .

Constraints

1≤n≤1000000; 0≤ai≤10^6

Output Format

In ra số bị lặp đầu tiên trong mảng, nếu không có số nào bị lặp in ra -1.

Sample Input 0

5
1 2 2 3 1

Sample Output 0

2


*/
int d[1000005] = {0};
int main() {
    int n,tmp; cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        d[tmp]++;
        if(d[tmp]==2){
            cout<<tmp;
            return 0;
        }
    }
    cout<<-1;
}