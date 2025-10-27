#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int  printArray(vector<int> arr, int n, int index){
   if(n == index) return 0;

    cout << arr[index] ;
    printArray(arr, n, index+1);
    return 0;
}
   
    

int  searchInArray(vector<int> arr, int n, int index , int target){
    if(n == index) return 0;

    if(arr[index] == target) cout << arr[index] << " is present at index " << index ;
    searchInArray(arr, n, index+1,target);
    return 0;
}

int maxNum(vector<int> &arr, int n, int index, int &maxi) {
    // base case
    if (index == n) return maxi;

    // update maxi
    maxi = max(maxi, arr[index]);

    // recursive call
    return maxNum(arr, n, index + 1, maxi);

    
}

int minNum(vector<int> &arr, int n, int index, int &mini) {
    // base case
    if (index == n) return mini;

    // update maxi
    mini = min(mini, arr[index]);

    // recursive call
    return minNum(arr, n, index + 1, mini);
}

int  printAllEven(vector<int> arr, int n, int index){
    if(n == index) return 0;

    if((arr[index] & 1 ) == 0) cout << arr[index] << " ";
    printAllEven(arr, n, index+1);
    return 0;
}
int  printAllOdd(vector<int> arr, int n, int index){
    if(n == index) return 0;

    if((arr[index] & 1 ) != 0) cout << arr[index] << " ";
    printAllOdd(arr, n, index+1);
    return 0;
}



int main() {
    
    vector<int> arr = { -100, 0, 9999, -5000, 123, 9999, -42, 678,18,20,10000, 9998, -9999 };

    int n = arr.size();
    int index=0;
    // int target = 50;
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // printArray(arr,n,index);
    // searchInArray(arr, n, index,target);
    // int ans = maxNum(arr,n,index,maxi);
    // cout << "Maximum element: " << ans << endl;

    //  int ans1 = minNum(arr,n,index,mini);
    // cout << "Minimum element: " << ans1 << endl;
    cout << "even no." << endl;
     printAllEven(arr, n, index);
     cout << "odd no."<< endl;

     printAllOdd(arr, n, index+1);




    return 0;
}