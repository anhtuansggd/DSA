#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Hiện tại trường đại học XYZ tổ chức cấp email cho sinh viên mới nhập học. Email và mật khẩu sẽ được cấp dựa trên tên của sinh viên và ngày sinh của sinh viên đó. Bạn hãy viết chương trình để cấp tài khoản theo yêu cầu như sau, tên email được tạo bằng cách lấy tên của sinh viên và ghép với các chữ cái đầu tiên của họ và tên đệm, tất các ký tự trong email đều ở dạng in thường, ví dụ sinh viên có tên "Nguyen Van Long" sẽ được cấp email "longnv@xyz.edu.vn". Mật khẩu sẽ dựa trên ngày sinh của sinh viên đó, bằng cách ghép ngày tháng năm lại với nhau, ví dụ sinh viên sinh ngày 27/04/2002 sẽ có mật khẩu là 2742002.

Input Format

Dòng đầu tiên là số lượng sinh viên cần cấp email N. N dòng tiếp theo, mỗi dòng gồm 2 phần là họ tên và ngày sinh, ngày sinh của sinh viên đã ở dạng chuẩn dd/mm/yyyy. Giữa các từ có thể có nhiều dấu cách, từ cuối cùng trong dòng là thông tin ngày sinh của sinh viên(xâu kí tự không có dấu cách chuẩn dd/mm/yyyy).

Constraints

1≤N≤5000; Dòng thông tin của sinh viên không quá 1000 kí tự, dữ liệu đảm bảo thông tin cuối cùng trong dòng là ngày sinh của sinh viên.

Output Format

Đối với mỗi sinh viên in ra thông tin trên 2 dòng, dòng thứ 1 là tên email, dòng thứ 2 là mật khẩu.

Sample Input 0

1
nguyen  VAN  NAM   22/07/2002

Sample Output 0

namnv@xyz.edu.vn
2272002


*/

void chuanHoa1(string &s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
}

int main() {
    int n; cin>>n;
    cin.ignore();
    while(n--){
        string s,tmp; getline(cin, s);
        vector<string> vt;
        stringstream ss(s);
        while(ss>>tmp){
            vt.push_back(tmp);
        }
        string r1 = "";
        chuanHoa1(vt[vt.size()-2]);
        r1 += vt[vt.size()-2];
        for(int i=0; i<vt.size()-2; i++){
            chuanHoa1(vt[i]);
            r1 += vt[i][0];
        }
        r1+="@xyz.edu.vn";
        cout<<r1<<endl;
        stringstream ss1(vt[vt.size()-1]);
        while(getline(ss1, tmp, '/')){
            cout<<stoi(tmp);
        }
        cout<<endl;
        
    }
    

    


}
