#include <iostream>
using namespace std;

     int factorial(int n){
     //base condition
     if(n <= 1) return 1; 
     // recursive call
     int ans = n * factorial(n-1);
     return ans;
     // processing (optional)
     } 

int powerOftwo(int n){
    //base condition
    if(n == 0) return 1;
    // recursive call 
    int ans = 2 * powerOftwo(n-1);
    return ans;
    // processing
}
 
int sum(int n){
  // base condition 
  if( n == 0 ) return 0;
  // recursive call
  int ans = n + sum( n-1);
  return ans;

}

int main(){
    int n;
    cin >> n;
    // int result = factorial(n);
    // int result = powerOftwo(n);
    int result = sum(n);
    
    cout << result;
    return 0;

}