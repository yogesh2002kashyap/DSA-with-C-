#include<iostream>
using namespace std;



 int transform(int n){
        for(int i=2; i<n; i++){
            if(n%i == 0){
                return n;
            }

            else if(n%2==0 && n%i !=0){
                int reverse = 0;
                int even = n;
                while(even != 0){
                    int digit = even%10;
                    reverse = reverse*10+digit;
                    even = even/10;
                }
                n = reverse;
            }

            else if(n%2 !=0 && n%i !=0){
                int odd = n;
                int sum =0;
                while(odd !=0){
                    sum += odd%10;
                    odd = odd/10;
                }
                n=odd;
            }
        }
        return n;
    }

int main(){
    int n ;
    cin >> n;
    
    int ans = transform(n);
    return ans;

   

    

    
}