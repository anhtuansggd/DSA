#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
Cho một dãy các số nguyên dương không quá 9 chữ số, mỗi số cách nhau vài khoảng trống, có thể xuống dòng. Hãy tìm các số không giảm (các chữ số theo thứ tự từ trái qua phải tạo thành dãy không giảm) và đếm số lần xuất hiện của các số đó.

Input Format

Gồm 1 dãy các số nguyên dương không quá 9 chữ số

Constraints

Dãy không quá 100000 số. Các số đều nguyên dương và không quá 9 chữ số.

Output Format

Ghi ra các số không giảm kèm theo số lần xuất hiện. Các số được liệt kê theo thứ tự sắp xếp số lần xuất hiện giảm dần. Trong trường hợp có nhiều số có cùng số lần xuất hiện thì thì số nhỏ hơn sẽ xếp trước.

Sample Input 0

888 289 123
321 54 888

Sample Output 0

888 2
123 1
289 1


*/

bool check(int n){
    int tmp=n%10;
    n/=10;
    while(n){
        if(tmp<n%10){
            return false;
        }
        tmp=n%10;
        n /= 10;
    }
    return true;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}
int main() {
    int tmp;
    map<int, int> mp;
    while(cin>>tmp){
        if(check(tmp)){
            mp[tmp]++;
        }
    }
    vector<pair<int, int>> vt;
    for(auto it:mp){
        vt.push_back(it);
    }
    sort(vt.begin(), vt.end(), cmp);
    for(pair<int, int> it : vt){
        cout<<it.first<<' '<<it.second<<endl;
    }
}