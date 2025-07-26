#include<iostream>
using namespace std;

int evenodd(int n){
    if(n%2==0){
        cout<<"The number "<<n<<" is even"<<endl;
    }
    else{
        cout<<"The number "<<n<<" is odd"<<endl;
        }
}

int bitwiseevenodd(int n){
    if(n & 1){
        cout<<"The number "<<n<<" is odd"<<endl;
    }
    else{
        cout<<"The number "<<n<<" is even"<<endl;
    }
}

void factorial(int n){
    cout<< "The factorial of " << n << " is: ";
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout << fact << endl;
}

int primeornot(int n){
    if(n<=1){
        cout << n <<" is not a prime number." <<endl;
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n % i == 0){
            cout << n <<" is not a prime number." <<endl;
            return 0;
         }
        
            cout << n <<" is a prime number." <<endl;
             
        }
        return 1;
    }

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // evenodd(number);
    // bitwiseevenodd(number);
    // factorial(number);
    // int prime = primeornot(number);
    // cout << "The function returned: " << prime << endl;
    


    return 0;

}