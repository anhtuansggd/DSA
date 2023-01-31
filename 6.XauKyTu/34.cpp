#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Một số được coi là số đẹp nếu nó có các chữ số không giảm từ trái qua phải hoặc không tăng từ trái quá phải, ví dụ số 1233333345 là số không giảm, số 5555555543 là số không tăng. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

Input Format

Số nguyên dương N.

Constraints

N có không quá 1000 chữ số.

Output Format

In ra YES nếu N là số đẹp ngược lại lại ra NO.

Sample Input 0

12377788888888888888888888888888888888888888888889

Sample Output 0

YES

Sample Input 1

8128777888888889

Sample Output 1

NO


*/

bool ko_giam(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i] > s[i+1]){
           return false;
        }
    }
    return true;
}

bool ko_tang(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i] < s[i+1]){
           return false;
        }
    }
    return true;
}

int main() {
    string s; cin>>s;
    if(ko_tang(s) || ko_giam(s)){
        cout<<"YES";
    }else cout<<"NO";
   

    
}
