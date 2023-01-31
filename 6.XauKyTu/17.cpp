#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;


/*
Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người theo 2 mẫu được yêu cầu trước. Xem output để rõ hơn về cách chuẩn hóa.

Input Format

Dòng duy nhất là tên người.

Constraints

Xâu kí tự tên người có không quá 1000 kí tự;

Output Format

Dòng đầu tiên in ra theo mẫu chuẩn hóa 1. Dòng thứ 2 in ra theo mẫu chuẩn hóa 2.

Sample Input 0

hoang   dINH  NaM

Sample Output 0

Hoang Dinh, NAM
NAM, Hoang Dinh


*/

void chuanHoa1(string &s){
    s[0] = toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

void chuanHoa2(string &s){
    for(int i=0; i<s.size(); i++){
        s[i] = toupper(s[i]);
    }
}

int main() {
    string tmp;
    vector<string> vt;
    while(cin>>tmp){
        vt.push_back(tmp);
    }
    int cnt = vt.size();
    for(int i=0; i<cnt-1; i++){
        chuanHoa1(vt[i]);
        if(i!=cnt-2){
            cout<<vt[i]<<' ';
        }else{
            cout<<vt[i]<<", ";
        }
    }
    chuanHoa2(vt[cnt-1]);
    cout<<vt[cnt-1];
    cout<<endl;
    cout<<vt[cnt-1]<<", ";
    for(int i=0; i<cnt-1; i++){
        cout<<vt[i]<<' ';
    }
}
    