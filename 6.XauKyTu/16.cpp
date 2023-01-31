#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Cho một xâu là tên người chỉ bao gồm các kí tự là chữ cái và dấu cách, giữa các từ trong câu có thể tồn tại nhiều dấu cách hãy chuẩn hóa tên người bằng cách viết hoa chữ cái đầu tiên của từng từ và viết thường các chữ cái còn lại. Xâu tiếp theo là ngày sinh của người này, bao gồm ngày tháng năm phân cách nhau bằng dấu '/', hãy chuẩn hóa ngày sinh của người này về đúng dạng dd/mm/yyyy.

Input Format

Dòng đầu tiên là tên người; Dòng thứ 2 là ngày sinh;

Constraints

Xâu kí tự tên người có không quá 2000 kí tự; Xâu ngày sinh có không quá 10 kí tự. Dữ liệu đảm bảo có dấu '/' giữa ngày, tháng, năm.

Output Format

Dòng đầu tiên in ra tên người sau khi chuẩn hóa. Dòng thứ 2 in ra ngày sinh sau khi đưa về dạng chuẩn dd/mm/yyyy.

Sample Input 0

hoang  dinh NAm
20/5/1999

Sample Output 0

Hoang Dinh Nam
20/05/1999


*/

void chuanHoa1(string &s){
    s[0] = toupper(s[0]);
    for(int i=1; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
}


int main() {
    string a,b,tmp; getline(cin,a); 
    stringstream ss(a);
    vector<string> vt;
    while(ss>>tmp){
        chuanHoa1(tmp);
        vt.push_back(tmp);
    }
    for(string s:vt){cout<<s<<' ';}
    cout<<endl;
    int cnt = 0;
    while(getline(cin,tmp,'/')){
        if(cnt<2){
            if(stoi(tmp)<10){
                cout<<'0'<<tmp<<'/';
            }else{
                cout<<tmp<<'/';
            }
            cnt++;
        }else{cout<<tmp;}
    }

    


}
    