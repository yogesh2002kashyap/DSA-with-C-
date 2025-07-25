#include<iostream>
using namespace std;

/*int linearSearch(int arr[], int n ,int val){
        for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}*/

/* void populate(int arr[],int n){
    int j=0;
    for(int i=0; i <= n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
} */

/* void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        // swap(arr[i], arr[i+1]);
        int temp =arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
} */

/* int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs; 
} */

/* int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
} */

void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			swap(input[i],input[nextZero]);
            nextZero++;
	}
}
}

int main(){
    /*int  sum=0;
    int n;
    cin >> n;
    int input[1000];
    for(int i=0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >>  input[i];
    }
     for(int i=0; i<n; i++){
         sum = sum + input[i];
     }
    cout << sum << endl;
    return 0;*/

    /* int arr[50];
    int n,val;
    cout << " Enter the number of element in array: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "enter element for index " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter the value to search: ";
    cin >> val;
    int index = linearSearch(arr, n, val);
    if(index == -1){
        cout << " value not found" << endl;
    }
    else{
        cout << "value found at index; " << index << endl;
    } */
    
    /* int arr[50];
    int n;
    cin >> n;
    populate(arr, n);
    cout << "Populated array: ";
    for(int i = 0; i < 50; i++) {
        cout << arr[i] << " ";
    } */

    int arr[]={1, 0, 1, 0, 1, 0,1,0,1,0};
    int size=10;
    //  swapAlternate(arr,size);
    // cout << "Array after swapping alternate elements: ";
    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }
    // int x;
    // cin >> x;
    // int ans=pairSumToX(arr, size, x);
    // int ans = tripletSumToX(arr, size, x);
    // cout << "Number of pairs with sum : " << x << " is " << ans << endl;
    sort0sand1s(arr, size);
    for (int i=0;i<size;i++){
        cout << arr[i] << " ";
    }   
    cout << endl;
    
    return 0;
    
}