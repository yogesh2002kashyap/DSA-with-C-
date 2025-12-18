#include <iostream>
using namespace std;


bool checkShorted(int arr[], int n , int index){
    //Base Condition
    if(index == n) return true;

    //Recursion
    if(arr[index]>arr[index+1]) return false;

    return checkShorted(arr,n,index+1);
}


int main() {
    int n = 9;
    int index=0;
    int arr[n] = {10,20,30,40,50,60,7,80,90};
    
    int ans = checkShorted(arr,n,index);
    if(ans) cout << "Array is shorted";
    else cout << "Array is not shorted";
     
    return 0;
}