#include <bits/stdc++.h>
using namespace std;


void rotateArray(vector<int> &nums, int k){
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k-1);
    reverse(nums.begin()+k,nums.end());
} 
void reverse(vector<int> &nums,int k){
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        swap(nums[i],nums[j]);
        ++i;
        --j;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums={1,2,3,4,5,6,7,8,9};
    
    int k=7;
    // rotateArray(nums,k);
    reverse(nums, k);
    for(auto x:nums){
        cout << x << " ";
    }

    return 0;
}