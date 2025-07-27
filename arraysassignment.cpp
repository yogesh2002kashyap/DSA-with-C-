#include <iostream>
#include <vector>
using namespace std;

/* int keypair(vector<int>& arr , int key){
    int n=arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j]==key)
            {
                cout << " Pair found at :" << arr[i] << "and" << arr[j] << endl;
                return 1;
            }
        }
    }
    return -1; // Return -1 if no pair is found
} */

/* int pivotindex(vector<int>& arr ){
    int n=arr.size();
    for(int i=0; i<n;i++){
    int lsum=0;
    int rsum=0;
    for(int j=i+1; j<n; j++)
        rsum+=arr[i];
    
    for(int j=0; j<i; j++)
        lsum+=arr[i];
    
    if(lsum==rsum){
        return i; // Return the pivot index if found
    }
}
return -1; // Return -1 if no pivot index is found
} */

int findmissingnum(vector<int>& num){
    int n=num.size();
    int allxor=0;
    
    for(int i=0; i<n; i++){
        allxor ^= i;
    }
    
    for(int j=0; j<n; j++){
        allxor ^= num[j];
    }
        
  
    return allxor;
}

int main(){
    
    int n;
    cout << "Enter the number of elements in the array: ";  
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i <n; i++) {
        cout << "Enter the elements of the array for index " << i << ":"; 
        cin >> arr[i];
    }       
    /* int key;
    cout << "Enter the key: ";  
    cin >> key;
    int result=keypair(arr,  key);
    if(result == -1){
        cout << "No pair found with the given key." << endl;
    } 
    int pivot=pivotindex(arr);
    if(pivot != -1){
        cout << "Pivot index found at: " << pivot << endl;
    } else {
        cout << "No pivot index found." << endl;
    } */
   int missingNum=findmissingnum(arr);
    
        cout << "The missing number is: " << missingNum << endl;    
    
    return 0;
}