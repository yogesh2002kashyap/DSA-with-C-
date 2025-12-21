#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    // numericc hollow half pyramid

     int n;
     cin >> n;
    for (int i = 0; i < n; i++)
    {
        for(int j = 1; j<=i+1; j++){
            if(j == 1) {cout << "1";}
            else if(j == i+1){ cout << j; }
            else if(i == n-1){ cout << j;}
            else {
                cout << " ";
            }
        }
        cout << endl; 
    }

    // Numeric hollow inverted half pyramid

    int i = 0;
    while (i<n)
    {
        for(int j=0; j<n-i; j++){
            if(j == n-i-1) cout << "5";
            else if(j == 0) cout << i+1 << " "; 
            else if(i == 0) cout << j+1 << " ";
            else cout << "  ";
        }
        i++;
        cout << endl;
    }

    // Numeric Palindrome

    while (i<n)
    {
        for(int j=0; j<n-i; j++){
            cout << "  ";
        }
        for(int j=0; j<i+1; j++){
            cout << j+1 << " ";
        }
        int k = i;
        for(int j=0; j<i; j++){
            cout << k << " ";
            k--;
        }
        i++;
        cout << endl;
    }

    // Solid half diamond

    int k = n-1;
    for(int i=0; i<2*n; i++){
        if(i<=n){
            for(int j=0; j<i; j++){
                cout << "*";
            }
            cout << endl;
        }
        else if(i>n){
            for(int j=0; j<k; j++){
                cout << "*";    
            }
            k--;
            cout << endl;
        }
    }
    
    // Fancy Pattern #1
    
    int N = 2*n;
    for(int i=0; i<n; i++){
        for(int j=0; j<N-2-i; j++){
            cout << "* ";
        }
        for(int j=0; j<2*i+1; j++){
            if(j%2==0) cout << i+1 << " ";
            else cout << "* ";
        }
        for(int j=0; j<N-2-i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // Fancy Pattern #2
    
    int start=1;
    for(int i=0; i<n; i++){
        // Growing phase
        for(int j=0; j<2*i+1; j++){
            if(j%2==0) {cout << start++;}
            else {cout << "*";}
        }
        cout << endl;
    }
    // Shrinking phase
    int start2 = start-n;
    
    for(int i=n-1; i>=0; i--){
        int stars = 1;
        for(int j=0; j<2*i+1; j++){
            if(j%2==0){
                cout << start2++;
            }
            else {
                stars++;
                cout << "*";
                
            }

        }
        start2 = start2 -2*stars+1;
        cout << endl;
    }
    
    // fancy pattern #3
    
    for(int i=0; i<n; i++){
        cout << "*";
        
        for(int j=1; j<=i; j++){
            cout << j;
        }
         for(int j=i-1; j>0; j--){
            cout << j;
        }
        if(i>0){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-2; i>=0; i--){
        cout << "*";
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=i-1; j>0; j--){
            cout << j;
        }
        if(i>0){
            cout << "*";
        }
        cout << endl;
    }

    // Floyd's Triangle Pattern
    
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << count++ << ", ";
        }
        cout << endl;
    }

    // Pascal's Triangle

    for(int i = 0; i < n; i++) {
    int val = 1;

    // spacing
    for(int s = 0; s < n - i - 1; s++)
        cout << " ";

    for(int j = 0; j <= i; j++) {
        cout << val << " ";
        val = val * (i - j) / (j + 1);
    }
    cout << endl;
    }

    // Butterfly Pattern
    
    int s=0;
    //upper half
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        for(int j=0; j<2*(n-i); j++){
            cout << "  ";
        }
        for(int j=0; j<i; j++){
            cout <<  "* ";
        }
        cout << endl;
    }
    // lower half
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        for(int j=0; j<2*(n-i); j++){
            cout << "  ";
        }
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // KM to Miles
    // float KM;
    // cout << "Enter the value in KM:";
    // cin >> KM;
    // float Miles=KM*0.621371;
    // cout << "Your value in Miles is: " << Miles;

    // Pint All digits of integr
    // int n;
    // cin >> n;
    // while(n!=0){
    //     int digit = n%10;
    //     cout << digit << endl;
    //     n/=10;
    // }

    // Area of circle
    // float radius;
    // cout << "enter radius:" << endl;
    // cin >> radius;
    // float area = 2*3.14159f*radius*radius;
    // cout << "area=" << area;

    // Given Number is even or odd
    // int n;
    // cout << "Enter your number:" << flush;
    // cin >> n;
    // // Normal Method
    // if(n%2==0) cout << "Number is even" << endl;
    // else cout << "Number id odd" << endl;
    // //Bitwise Method
    // if(n&1) {cout << "Number is odd" << endl;}
    // else {cout << "Number is even" << endl;}

    // Find factotial
    // int n;
    // cout << "Enter Number" << flush;
    // cin >> n;
    // int factorial = 1;
    // for(int i=n; i>0; i--){
    //     factorial *= n;
    //     n--; 
    // }
    // cout << "The value of factorial is:" << factorial << endl;

    // Check Prime
    // int n;
    // cout << "Enter you number:" << flush;
    // cin >> n;
    // bool isPrime=true;
    // int i=2;
    // while(i*i<n){
    //     if(n%i==0){
    //         isPrime = false;
    //     }
    //     i++;
    // }
    // if(!isPrime){
    //     cout << "Number is Not Prime";
    // }
    // else cout << "Number is prime";

    // Print all Prime from 1 to n
    // int n;
    // cout << "Enter Number:" << flush;
    // cin >> n;
    // for(int i=2; i<n; i++){
    //     bool isPrime = false;
    //     int j=2;
    // while(j<i){
    //     if(i%j==0){
    //         isPrime = true;
    //     }
    //     j++;
    // }
    // if(!isPrime){
    //     cout << i << ", "; 
    // }
    // }

    // Reverse Integer
    // int n;
    // cin >> n;
    // int rev = 0;
    // while(n!=0){
    //      rev = rev*10 +(n%10);
    //     n /=10;
    // }
    // cout << rev;

    // set the Kth bit
    // int n;
    // cout << "Enter Integer" << endl;
    // cin >> n;
    // int k;
    // cout << "Enter the value of K" << endl;
    // cin >> k;
    // n = n | (1<<k);
    // cout << n;

    //Temprature conversion
    // float n;
    // cout << "Enter temprature in Celsius (°C)" << flush;
    // cin >> n;
    // float f = (n*1.8)+32;
    // cout << f << " is your Temprature in Fahrenheit (°F)";

    // Count All set bits
    // int n;
    // cout << "Enter your Number:" << flush;
    // cin >> n;
    // int count=0;
    // while(n!=0){
    //     count += (n&1);
    //     n >>=1;
        
    // }
    // cout << count;
    return 0;
}


