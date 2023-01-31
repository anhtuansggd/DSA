#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Mod = 1000000007;

/*
Trong giờ học ngôn ngữ lập trình Python, thầy giáo có đưa ra một bài toán cho Tèo, bài toán như sau "Cho một xâu kí tự S, Tèo hãy xác định xem liệu rằng có thể xóa đi bất kì một kí tự nào trong xâu S ở một vị trí bất kì và xâu S trở thành từ "python" được hay không? Biết rằng Tèo có thể xóa bất kì một kí tự nào nhưng không thể hoán đổi vị trí các kí tự trong xâu S ban đầu". Hiện nay vì Tèo đang bận gói bánh chưng phụ thầy mẹ nên nhờ bạn giải giúp. Hy vọng bạn có thể giúp được Tèo !!!

Input Format

Một xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường.

Constraints

Xâu S có độ dài không quá 1000 kí tự.

Output Format

In ra YES nếu có thể tạo ra xâu "python" bằng cách xóa đi các kí tự trong xâu, ngược lại in NO.

Sample Input 0

rRMssizYyAbYPbfYPwaamZFTLSoWSqCewiGIKymcnlVUuQqpXGinxSuPooRfUljsZhjncyvWeDdgoOrDHeXlMbkNvThvDZLnFIteaOnWapaPjmHBFlqEwkWRWTSzZnyKkpNTpidcXxxptIenHGKovBporbkaoPjyLBZNrCzxGtZPMoQmgrpiihYRdGYUSRChscdQpVZYdaTAqyDBfSrBmqsEDjeSysMKIuQdggYOxXuMqleEigpllWAyPOGjHlRCraPTuPgByGDokiPcoFHLhhVlIeGvzssrOWVetiknhtuerNysZhcCcZyIuPUjhBOIvYnHYopsUZuptCQoxYBSodMAtxERREaGgNxtSjuOdyQCFlxYgGxsswbDhHWErcNjzdycpZYfCsvPPVgNqFNbLHegCSBNbDzhSDjGoPKLZCQDvfKeHokfDKWQwOZKhTfTXGDCHtpopuyXabGgbyncHVKlPzrqtlGRUZDKKvGkZaeZaVRZvfeznbzBgwnNwprUEQuupkVKrzzHENzLZCITPGYsZPwgwmzcDCBkIVprSFWpISLGjAmZbcyIUOfmmuNDdDDDPGziCzztviOsHGjIzysPLyTczfWrWalbeLgnfLVhzLPfXhoQwIjVMjBAxyVbSczFhUXaRzBVmeWvlIgpQBDgZFtgeHLHZWMIRxiscYqTyKNuzucMczDycPWMYNYUHCVBUZZktqxtxNWyjyTQFAcPoKteBGTxhcdezFVzuNaziplGPtzZpNFVQaxEQwxbdatBjRCnccjjYLTfWbVgeiraCDLGtEpgkOoWnGvawBXvtTUMAAnsWPmxFZqeLCQiPRzXuMhQMSUaslbNNgplnrVnpcbWcyZREbKSCArfKYblBlATNuycAQEXuf

Sample Output 0

YES


*/

int main() {
    string s,key="python"; cin>>s;
    int idx = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==key[idx]){
            idx++;
        }
        if(idx==6)break;
    }
    if(idx==6){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    


}
