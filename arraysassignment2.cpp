#include<iostream>
#include<vector>

using namespace std;


/* int maxsubarray(vector<int>& arr){
    int n=arr.size();
    int maxsum=0;
    int k;
    cin >> k;
    for(int i=0; i<n-k+1; i++){
        for(int j=k-1; j<n; j++){
            while(j<n){
                for(int y=0; y<k;y++){
                    int sum=0;
                    sum +=arr[y];
                }
            
            }
        }

    }
} */

int sortarray(vector<int> &arr){
    int n=arr.size();
    int min=INT16_MAX;
    
    for(int i=0; i<n; i++){
        int key=0;
        min=MIN(min,arr[i]);
        arr[key]=min;
        key++;
        }
        
    }



int main(){
    int n; 
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elementsof the array: ";
    for(int i=0; i<n; i++){
        int d;
        cin >> d;
        arr.push_back(d);

    }
    for(int x: arr){
        cout << x << " ";
        }

}