#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S bao gồm các chữ cái và dấu cách, một từ được định nghĩa là các kí tự liên tiếp không chứa dấu cách, hãy đếm số lượng từ xuất hiện trong xâu S.

Input Format

Dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra số lượng từ xuất hiện trong xâu S.

Sample Input 0

ngon ngu lap trinh java, python

Sample Output 0

6


*/

int main() {
    string s; getline(cin,s);
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            while(i<s.size() && isalpha(s[i])){
                i++;
            }
            cnt++;
        }
    }
    cout<<cnt;



    

}
    