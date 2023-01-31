#include<bits/stdc++.h>
using namespace std;

int n, a[1005], cnt=0, fl=0;

/*
Cho số nguyên dương N, bạn hãy in ra các cách biểu diễn N dưới dạng tổng của các số tự nhiên không vượt quá N.

Input Format

Số nguyên dương N

Constraints

1<=N<=20;

Output Format

Dòng đầu tiên in ra số lượng cách biểu diễn. Các dòng tiếp theo in ra cách biểu diễn được liệt kê theo thứ tự từ từ điển giảm dần.

Sample Input 0

5

Sample Output 0

7
5
4+1
3+2
3+1+1
2+2+1
2+1+1+1
1+1+1+1+1


*/

void init(){
    a[1] = n;
    cnt=1; 
}

void sinh(){
    int i=cnt;
    while(i>=1 && a[i]==1){
        i--;
    }
    if(i==0){
        fl=1;
    }else{
        int donVi = cnt-i+1;
        a[i]--;
        cnt = i;
        int q = donVi/a[i], r = donVi%a[i];
        if(q!=0){
            for(int j=1; j<=q; j++){
                a[i+j] = a[i];
            }
            cnt += q;
        }
        if(r!=0){
            cnt++;
            a[cnt]=r;
        }
    }

}
int main(){
    cin>>n;
    init();
    vector<string> v;
    while(!fl){
        string tmp = "";
        for(int i=1; i<=cnt; i++){
            tmp += to_string(a[i]);
            if(i!=cnt){tmp+="+";}
        }
        v.push_back(tmp);
        sinh(); 
    }
    cout<<v.size()<<endl;
    for(string s:v){
        cout<<s<<endl;
    }    
    return 0;
}