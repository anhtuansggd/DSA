#include<bits/stdc++.h>
using namespace std;

/*
Có n đứa trẻ muốn đi đu quay, và nhiệm vụ của bạn là tìm một chiếc thuyền gondola cho mỗi đứa trẻ. Mỗi chiếc gondola có thể có một hoặc hai người trong đó và ngoài ra, tổng trọng lượng của một chiếc gondola không được vượt quá x. Bạn biết cân nặng của mọi đứa trẻ. Số lượng thuyền gondola tối thiểu cần thiết cho trẻ em là bao nhiêu?

Input Format

Dòng nhập đầu tiên chứa hai số nguyên n và x: số đứa trẻ và trọng lượng tối đa cho phép. Dòng tiếp theo chứa n số nguyên p1, p2,…, pn: trọng lượng của mỗi đứa trẻ

Constraints

1≤ n ≤2.10^5; 1≤ x ≤10^9; 1≤ pi ≤ x;

Output Format

In một số nguyên: số lượng thuyền gondola tối thiểu.

Sample Input 0

4 10
7 2 3 9

Sample Output 0

3


*/
int main(){
    int n, s; cin>>n>>s;
    int a[n]; for(int &x:a){cin>>x;}
    sort(a, a+n);
    int l=0, r=n-1,cnt=0;
    while(l<=r){
    	if(a[l]+a[r]>s){
    		cnt++; r--;  
    	}else{
    		cnt++; l++; r--;
    	}
    }
    cout<<cnt;
    return 0;
}