#include <bits/stdc++.h>
using namespace std;


// Key Pair or Two Sum
    /* Brute Force*/
bool twoSum(vector<int>& arr, int target) {
        // code here
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]+arr[j]==target){
                    return true;
                }
            }
        }
        return false;
        
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {0,-1,2,-3,1};
    int target = -2;
    int ans = twoSum(arr,target);
    cout << ans;
    

    return 0;

}