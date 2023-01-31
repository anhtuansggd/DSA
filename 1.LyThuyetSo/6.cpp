#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll  long long 
#define FOR(i, a, b) for(int i=a; i<b; i++)
#define FORR(i, a, b) for(int i=a; i>b; i--)
#define faster() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll> 

/*
Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

Input Format

Một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống.

Constraints

Các số đều không vượt quá 9 chữ số.

Output Format

Viết ra số lượng các số thuần nguyên tố tương ứng

Sample Input 0

2345 6789

Sample Output 0

15


*/

int ngto(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}

int check(int n){
    int i=n;
    int sum = 0;
    while(i!=0){
        int tmp = i%10;
        if(tmp!=2 && tmp!=3 && tmp != 5 && tmp!=7){
            return 0;
        }
        sum += tmp;
        i/=10;
    }
    if(ngto(sum)){
        return 1;
    }
    return 0;
}



int main(){
    int a, b; cin>>a>>b;
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(check(i) && ngto(i)){
            cnt++;
        }
    }
    cout<<cnt;


    return 0;
}