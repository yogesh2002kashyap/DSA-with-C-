#include <bits/stdc++.h>
using namespace std;

int mystoi(string s) {
        int len = s.size();
        double num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool negative = s[i] == '-';
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + s[i]-'0';
            i++;
        }
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
    }

    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[] = {"","M","MM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
}

string addBinary(string a, string b) {
    string ans;
    int carry = 0;
    int i = a.length()-1 ;
    int j = b.length() -1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry % 2 + '0';
      carry /= 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
  }

  void reverseString(string &s,int n, int start){
    for(int i=start,j=n-1+start; i<j; i++,j--){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}





int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // string s = "";
    // cin >> s;
    // int ans = mystoi(s);
    //  cout << ans;    

    // string ans= intToRoman(675);
    // string ans = addBinary("101", "101");
    
    // string s = "asdf";
    // reverseString(s,s.length(),0);
    // for(char each:s){
    //     cout << each << " ";
    // }
    
    return 0;
}