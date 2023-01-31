#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*


    Kirito đang bị mắc kẹt ở cấp độ của MMORPG mà anh ấy đang chơi hiện tại. Để tiếp tục trò chơi, anh ta phải đánh bại tất cả n con rồng sống ở cấp độ này. Kirito và những con rồng có sức mạnh, được biểu thị bằng một số nguyên. Trong cuộc đọ sức giữa hai đối thủ, kết quả của cuộc đọ sức được quyết định bởi sức mạnh của họ. Ban đầu, sức mạnh của Kirito bằng s.

    Nếu Kirito bắt đầu đấu tay đôi với rồng thứ i (1 ≤ i ≤ n) và sức mạnh của Kirito không lớn hơn sức mạnh của rồng có sức mạnh là xi, thì Kirito thua trận đấu và chết. Nhưng nếu sức mạnh của Kirito lớn hơn sức mạnh của con rồng, thì anh ta sẽ đánh bại con rồng và được tăng thêm sức mạnh theo là yi.

    Kirito có thể chiến đấu với những con rồng theo bất kỳ thứ tự nào. Xác định xem liệu anh ta có thể chuyển sang cấp độ tiếp theo của trò chơi hay không, tức là đánh bại tất cả những con rồng mà không bị thua một lần nào.

Input Format

    Dòng đầu tiên chứa hai số nguyên được phân tách bằng dấu cách n và s (1 ≤ s ≤ 10^6, 1 ≤ n ≤ 10^5).

    Sau đó n dòng tiếp theo: dòng thứ i chứa các số nguyên được phân tách bằng dấu cách là xi và yi (1 ≤ xi ≤ 10^4, 0 ≤ yi ≤ 10^4) - sức mạnh của con rồng thứ i và sức mạnh được tăng thêm khi đánh bại nó.

Constraints

    1 ≤ s ≤ 10^6, 1 ≤ n ≤ 10^5

    1 ≤ xi ≤ 10^4, 0 ≤ yi ≤ 10^4

Output Format

Trên một dòng duy nhất in "YES" (không có dấu ngoặc kép), nếu Kirito có thể chuyển sang cấp độ tiếp theo và in "NO" (không có dấu ngoặc kép), nếu anh ta không thể.

Sample Input 0

2 2
1 99
100 0

Sample Output 0

YES


*/

bool cmp(pair<int, int> pr1, pair<int, int> pr2){
    return pr1.first < pr2.first;
}
int main() {
    int s,n; cin>>n>>s;
    vector<pair<int, int>> vt;
    for(int i=0; i<n; i++){
        int x,y; cin>>x>>y;
        vt.push_back({x,y});
    }
    sort(vt.begin(), vt.end(), cmp);
    for(auto it=vt.begin(); it!=vt.end(); it++){
        if(s<=(*it).first){
            cout<<"NO"; return 0;
        }else{
            s += (*it).second;
        }
    }
    cout<<"YES";




    
}
