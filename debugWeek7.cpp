#include <bits/stdc++.h>
using namespace std;


bool isPowerOfFour(int n) {
        if(n<=0){
           return false;
        }
        if(n==1){
            return true;
        }
        if(n%4!=0){
           return false;
        }
       
        return isPowerOfFour(n/4);
    }

double myPow(double x, int n) {

       int p = abs(n);
       double ans = 1.0;
       while(p>=1){
          p /= 2 ;
          x *= x;
       }
       return n<0 ? 1/ans : ans;    
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool ans = isPowerOfFour(61);
    cout << ans;

    return 0;
}