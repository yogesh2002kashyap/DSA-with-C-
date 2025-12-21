#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //  **Debug the code. This code is trying to calculate area of a rectangle.**
    // double width, height;
	// cin >> width >> height;
	// double area = width * height;
	// cout << area << endl;

    // **Debug the code. Convert Binary to Decimal.**
    // int n,sum=0,factor=1;
    // cin>>n;
    // while(n!=0){
    //     int digit = n%10;
    //     sum = sum + digit*factor;
    //     factor = 2*factor;
    //     n = n/10;
    // }
    // cout<<sum;
	
    // **Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)**
    int n, flag=1;
    cin>>n;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i;j++){

            if(i%j==0){
                flag = 0;
            }
           
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    
	int n,a=0;
	cin>>n;
    int z = n,digits=0;
    while(z!=0){
        z = z/10;
        digits++;
    }
    while(n!=0){
        int k = n%10,z=digits-1;
        while(z--){
            k = k*10;
        }
        a = a + k;
        digits--;
        n = n/10;
    }
    cout<<a;
    return 0;

void checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return false;
            }
            else if(temp>n){
                return true;
            }
        }
    }


    



   


    return 0;
}