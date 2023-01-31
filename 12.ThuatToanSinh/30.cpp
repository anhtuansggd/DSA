#include<bits/stdc++.h>
using namespace std;

/*
Một tên trộm đột nhập vào 28techland và muốn lấy đi 1 số đồ vật có giá trị lớn nhất. Ở 28techland tồn tại n đồ vật, đồ vật thứ i sẽ có trọng lượng w[i] và có giá trị là v[i], tên trộm mang theo cái balo có thể chứa được trọng lượng tối đa là S, nhiệm vụ của bạn là hãy giúp tên trộm lựa chọn các đồ vật sao cho tổng trọng lượng của chúng không vượt quá S và có giá trị lớn nhất. Chú ý tên trộm chỉ có thể chọn hoặc không chọn 1 đồ vật.

Input Format

Dòng đầu tiên là N và S; Dòng thứ 2 là N số tương ứng với trọng lượng của các đồ vật; Dòng thứ 3 là N số tương ứng với giá trị của các đồ vật;

Constraints

1<=N<=15; 1<=S<=800; 1<=w[i]<=200; 1<=v[i]<=200;

Output Format

In ra tổng giá trị của các đồ vật trong balo.

Sample Input 0

12 356
174 153 127 156 156 5 132 161 170 26 181 50 
103 32 102 85 54 166 187 173 137 54 24 91 

Sample Output 0

617


*/

int n, a[1005], fl=0, s, w[100], v[100];

void init(){
    cin>>n>>s;
    for(int i=0; i<n; i++){
        cin>>w[i];
    }
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        a[i]=0;
    }
}

void sinh(){
    int i=n-1;
    while(i>=0 && a[i]==1){
        i--;
    }
    if(i==-1){
        fl=1;
    }else{
        a[i]=1;
        for(int j=i+1; j<n; j++){
            a[j]=0;
        }
    }
}

int main(){
    init();
    int maxR = 0;
    while(!fl){ 
        int sum = 0, maxV= 0;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                 sum += w[i];
                 maxV+= v[i];
            }
        }
        if(sum<=s){
            maxR = max(maxV,maxR);
        }
        sinh();
    }
    cout<<maxR;
    return 0;
}