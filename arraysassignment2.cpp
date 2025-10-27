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

vector<int> sortarray(vector<int> &arr){
    int n=arr.size();
    vector<int> sortedarr(n);
        int zero=0;
        int ones=0;
        int twos=0;
    
    for(int i=0; i<n; i++){
        switch(arr[i])  // Using switch-case to count occurrences of 0s, 1s, and 2s
        {
        case 0:
            zero++;
            break;
        case 1:
            ones++;
            break;
        case 2:
            twos++;    
        
        default:
            break;
        }

        }
    // Reconstructing the sorted array based on counts
    for(int i=0;i<zero; i++){
        sortedarr[i]=0;
    } 
    for(int i=0;i<ones; i++){
        sortedarr[i+zero]=1;
    }
    for(int i=0;i<twos; i++){
        sortedarr[i+zero+ones]=2;
    }
    return sortedarr;
}





int main(){
    //int n; 
    //cout << "Enter the number of elements in the array: ";
    //cin >> n;
    //vector<int> arr(n);
    //cout << "Enter the elementsof the array: ";
    //for(int i=0; i<n; i++){
    //    int d;
    //    cin >> d;
    //   arr.push_back(d);

    //}
    /* for(int x: arr){
        cout << x << " ";
        } */
    vector<int> arr = {0, 1, 2, 0, 1, 2, 0, 1, 2}; // Example array
    vector<int> sortedarr = sortarray(arr);
    cout << "Sorted array: " << endl;
    for(int x: sortedarr){
        cout << x << " ";
    }
    cout << endl;
    return 0;

}