#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy thực hiện tách các số xuất hiện trong xâu ra và ghép lại với nhau để tạo thành một số tự nhiên lớn nhất.Ví dụ với xâu S = "123abcda234kkf11" thì ta sẽ tách được các số 123, 234 và 11, trong trường hợp các số bắt đầu bằng chữ số 0 thì ta loại bỏ các số 0 vô nghĩa này. Sau đó ghép lại với nhau thành số 23412311 là số lớn nhất có thể đạt được.

Input Format

Một dòng duy nhất chứa xâu S.

Constraints

1≤len(S)≤100000;

Output Format

In ra số lớn nhất ghép được.

Sample Input 0

123abcda234kkf11

Sample Output 0

23412311


*/
int main() {
    string s,tmp; cin>>s;
    for(char &c:s){
        if(isalpha(c)){
            c = ' ';
        }
    }
    stringstream ss(s);
    vector<string> vt;
    while(ss >> tmp){
        while(tmp.size()>1 && tmp[0]=='0'){
            tmp.erase(0,1);
        }
        vt.push_back(tmp);
    }
    sort(vt.begin(), vt.end(), [](string a, string b)->bool{
        string t1 = a+b;
        string t2 = b+a;
        return t1>t2;
    });
    for(string s:vt){cout<<s;}
    
}
