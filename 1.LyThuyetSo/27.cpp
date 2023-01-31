#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước

Input Format

2 số a, b

Constraints

1≤a≤b≤10^7

Output Format

In ra các số đẹp trong đoạn a, b. Trong trường hợp không tồn tại số đẹp nào thì in ra -1.

Sample Input 0

1 1000

Sample Output 0

66 222 252 282 414 434 444 474 494 525 555 585 595 606 616 636 646 666 696 777 828 858 868 888 969


*/

bool thuanNghich(int n){
    int tmp = n, res = 0;
    while(tmp){
        res = res*10 + tmp%10;
        tmp /= 10;
    }
    return n == res;

}

bool pt(int n){
    if(thuanNghich(n)){
        int cnt = 0;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                cnt++;
            }
            
        }
        if(n>1){cnt++;}
        if(cnt>=3){return true;}
    }
    return false;
}

int main(){
    int a,b; cin>>a>>b;
    int fl = 1;
    for(int i=a; i<=b; i++){
        if(pt(i)){
            cout<<i<<" "; fl = 0;
        }
    }
    if(fl){cout<<"-1";}
}    