#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums,int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

void selectionSort(vector<int> &nums,int n){
    for(int i=0; i<n-1; i++){
        auto minIndex = min_element(nums.begin()+i,nums.end());
        swap(nums[i], *minIndex);
        
    }
}

void insertioSort(vector<int> &nums,int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int key = nums[i];
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}
bool myComp(int &a,int &b){
    return a>b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums={3, 1, 2, 1, 3, 1};
    int n=6;
    // bubbleSort(nums,n);
    // selectionSort(nums,n);
    // insertioSort(nums,n);
    sort(nums.begin(), nums.end(),myComp);
    
    for(auto x:nums){
        cout << x << " ";
    }

    return 0;
}