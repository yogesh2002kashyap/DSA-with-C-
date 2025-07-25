#include<iostream>
 using namespace std;

 // Function to print a numeric hollow half pyramid pattern
 void numerichollowhalfpyramin(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(j==1 || j==i || i==n){
                    cout<<j<<" ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }

 }

 // Function to print a numeric hollow inverted half pyramid pattern
 void numerichollowinvertedhalfpyramin(int n){
        for(int i=n; i>=1; i--){
            for(int j=1; j<=i; j++){
                if(j==1 || j==i || i==n){
                    cout<<j<<" ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
 }

// Function to print a numeric palindrome equilateral pyramid pattern
 void numericpallindronequileteralpyramid(int n){
    for(int i=1; i<=n; i++){
        // Print spaces
        for(int j=1; j<=n-i; j++)
            cout << " ";
        // Print increasing numbers
        for(int j=1; j<=i; j++)
            cout << j;
        // Print decreasing numbers
        for(int j=i-1; j>=1; j--)
            cout << j;
        cout << endl;
    }
}

// Function to print a solid half diamond pattern
void solidhalfdiamond(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=n-1; i >=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout << endl;
    }
}

// Function to print a fancy pattern with numbers and stars
void fancypattern1(int n){
    
    for(int i=0; i<n; i++){
        int start_num_index=8-i;
         int num=i+1;
        int count_num=num;
        for(int j=0; j<17; j++){
            if(j==start_num_index && count_num>0){
                cout<<num;
                start_num_index+=2;
                count_num--;
            }
            else
            cout<<"*";

        }
        cout<<endl;
    }
}

// Function to print a fancy pattern with numbers and stars
void fancypattern2(int n){
    int num=1;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<=i; j++){
             cout<<num;
              num++;
              if(j<i){
                cout<<"*";
              }
            }
            
        
        cout<<endl;
        
    }
   // Inverted part of the pattern
    int start=num-n;
    for(int i=0; i<n; i++){
        int k=start;
     for(int j=0; j<n-i; j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }
 }
        start=start-(n-i-1);
        cout<<endl;
        }
    }

// Function to print a fancy pattern with numbers and stars
void fancypattern3(int n){
    for(int i=0;i<n;i++){
        int cond=i<=n/2 ? 2*i : 2*(n-i-1);
        cout<<"*";
        for(int j=0;j<=cond;j++){
            if(j<=cond/2){
                cout<<j+1;
            } else {
                cout<<cond-j+1;
            }
            
    }
    cout<<"*";
cout<<endl; 
}
}

// Function to print Floyd's triangle
void floydsTriangle(int n) {
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

// Function to print Pascal's triangle
void pascalTriangle(int n){
    for(int i=1;i<=n;i++){
        int C=1;
        for(int j=1;j<=i;j++){
            cout<<C<<" ";
            C=C*(i-j)/j;
        }
   cout<<endl;
    }
}

// Function to print a butterfly pattern
void butterflypattern(int n){
    for(int i=1;i<=2*n;i++){
        for(int j=1; j<=2*n; j++){
            if(i<=n){
                cout<<((j<=i || j>=2*n-i+1) ? "*" : " ");
            }
            else
                cout<<((j>i-1 || j<=2*n-i+1 ? "*" : " "));
            

            }
        cout<<endl;
        } 
}

float KMtoMiles(float km){
cout<<"The distance in miles is:"<<km*0.621371<<" miles"<<endl; 
}

void printAlldigiits(int digit){
    if(digit==0){
        cout<<"The digits are: 0"<<endl;
        return; 
    }
    if(digit<0){
        cout<<"Please enter a positive number"<<endl;
        return;
    }
    while(digit){
    cout<<"The digits are: "<< (digit%10)<<endl;
    digit /=10;
    }
}
     
float areaofcircle(float radius){
    cout<<"The area of circle is:" <<(3.14159*radius*radius)<<"square units"<<endl;
    return 3.14159 * radius * radius;
}


 int main(){
    int n;
     cout<<"Enter the number of rows: ";
     cin>>n;
    // float radius;
    // cout<<"Enter the radius of the circle: ";   
    // cin>>radius;
    // numerichollowhalfpyramin(n);
    // numerichollowinvertedhalfpyramin(n);
    // numericpallindronequileteralpyramid(n);
    // solidhalfdiamond(n);
    // fancypattern1(n);
    // fancypattern2(n);
    // fancypattern3(n);
    // floydsTriangle(n);
    // pascalTriangle(n); 
    // butterflypattern(n);
    // KMtoMiles(n);
    // printAlldigiits(n);
    //  areaofcircle(radius);
    return 0;
 }