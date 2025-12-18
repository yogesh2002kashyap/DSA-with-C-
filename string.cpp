#include<iostream>

using namespace std;


int lastOccurance(string s, char x, int ans, int i){
    
    int n = s.length();
    if(i==n) return ans;

    if(s[i]==x){
        ans = i;
    }
    lastOccurance(s,x,ans,i+1);
    return 0;

}

int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;
    int ans = -1;
    int i = 0;
    lastOccurance(s, x, ans,i);
    cout << ans << endl;
}