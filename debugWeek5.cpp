#include<iostream>
using namespace std;

/*int mystoi(string s){
        int len = s.size();
        double num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        
        if(s[i] == '-') bool negative = true;
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
    } */ 
   string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";
        int i = 0, j = 0; 
        bool pivot = true;


        while (i < m || j < n) {
            pivot == true ? result.push_back(word1[i++]) : result.push_back(word2[j++]);
            pivot = (!pivot);
        }

        return result;
    }

int main() {
    /*
Test Case:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
*/
string word1 = "abcdefghijklmno";
string word2 = "pqrstuvwyz";

string result1 = mergeAlternately(word1,word2);

    cout << result1;
    return 0;
}