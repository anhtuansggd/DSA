#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
28tech là người yêu hoa quả nên thường kết thân với người hàng xóm, một ngày nọ anh ta đến chơi nhà hàng xóm có cửa hàng bán hóa quả rất lớn ở thị trấn. Người hàng xóm có đưa ra cho 28tech một bài toán và nói rằng nếu anh ta giải được bài toán này thì anh ta có thể lấy bất kì trái cây nào mà anh ta muốn. Bài toán như sau : "Có n trái cây các loại, trong đó có k1 trái cam, k2 trái quýt, k3 trái táo, k4 trái sầu riêng, hãy tìm số cách xếp n trái cây này thành 1 hàng dài, trong đó các trái cây cùng loại được coi là giống nhau, và việc hoán đổi vị trí các trái cây cùng loại chỉ được tính là 1 cách sắp xếp". Bạn hãy dùng kiến thức toán và lập trình của mình để nhanh chóng giải quyết bài toán này hộ anh ấy nhé !!!

Input Format

Dòng đầu chứa số nguyên n; Dòng 2 chứa 4 số k1, k2, k3, k4 viết cách nhau một dấu cách

Constraints

1<=n<=20; 0<=k1,k2,k3,k4<=n và k1 + k2 + k3 + k4 = n

Output Format

In ra đáp án của bài toán

Sample Input 0

3
1 1 1 0

Sample Output 0

6

Explanation 0

6 cách xếp 3 quả táo, cam, quýt là (cam, quýt, táo), (cam, táo, quýt), (quýt, cam, táo), (quýt, táo, cam), (táo, cam, quýt), (táo, quýt, cao).
*/

ll gt(int k){
    if(k==0 || k==1){
        return 1;
    }else{
        return k*gt(k-1);
    }
}

int main(){
    
    int n,k1,k2,k3,k4; cin>>n>>k1>>k2>>k3>>k4;
    cout<<gt(n)/(gt(k1)*gt(k2)*gt(k3)*gt(k4));

    
    return 0;
}