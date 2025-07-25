#include<iostream>
using namespace std;

void printelements(int arr[] , int size){
    for(int index=0; index<size; index++){
        cout << arr[index] << " ";
    }
}

int findmax(int arr[], int size){
    int maxNum =arr[0];
    for(int i=0; i<size; i++){
        maxNum=max(maxNum,arr[i]);
        }
        return maxNum;
    }

int printzerosandones(int arr[],int size){
    int zeroscount=0;
    int onescount=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeroscount++;
        }
        
        if(arr[i]==1){
        onescount++;
        }

         }
         cout<<"Zeros: "<<zeroscount<<", Ones: "<<onescount<<endl;
         
}    



int main(){

    int arr[100];
    int size; 
    
    cout << "Enter the number of elements" << endl;
    cin >> size;
     for(int i=0; i<size; i++){
        cout << " Enter the element for index: " << i << endl;
        cin >> arr[i];
     }
    // printelements( arr,size);
   // int maxAns=findmax(arr,size);
    //cout <<"max value is :"<<  maxAns;
    
    int ans=printzerosandones(arr,size);
    cout << ans ;
     return 0;
      





}