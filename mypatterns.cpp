#include<iostream>
using namespace std;

void fullpyramid(int n){
for (int  i = 0; i < n; i++)
{
    for (int j = 0; j < n-i-1; j++)
 cout << " ";

 
 for(int j = 0; j < i+1;j++)
 cout << "* "; 
cout << endl;
}
}

void invertedfullpyramid(int n){
    for (int i = 0; i < n; i++)
    { //spaces
        for(int j=0; j < i; j++)
        cout << " ";
        //stars
        for(int j=0; j < n-i; j++)
        cout << "* ";
        cout << endl;   
    }
}

 void diamond(int n){
    fullpyramid(n);
    invertedfullpyramid(n);
}

void hollowpyramid(int n){
    for (int i = 0; i < n; i++)
    { //spaces
        for(int j=0; j < n-i; j++ )
        cout << " ";
        // stars
        for( int j=0; j <i+1; j++){
            if (i==0|| /*i==n-1 ||*/ j==0 || j==i+1-1)
                cout << "* ";
            else
            cout << "  ";
        }
        cout << endl;
    }
}

void invertedhollowpyramid(int n){
    // outer loop
    for(int i=0; i < n; i++){
        //spaces
        for(int j=0; j < i+1; j++)
        cout << " ";
        //stars
        for(int k=0; k < n-i; k++){
            if (/*i==0 || i==n-1 ||*/ k==0 || k==n-i-1)
            {
                cout << "* ";
            }
            else
            cout << "  ";
        }
        cout << endl;
    }
}

void hollowdiamond(int n){
    hollowpyramid(n);
    invertedhollowpyramid(n);
}

void mixpyramid(int n){
    //Part 1
    for(int i=0; i < n; i++){

     for(int j=0; j < n-i; j++)
    cout << "*";
    for(int j=0; j < 2*i+1; j++)      
    cout << " ";
    for(int j=0; j <n-i ; j++)
    cout << "*";
    cout << endl;     
    }
    //Part 2
    for(int i=0; i < n; i++){
        for(int j=0; j < i+1; j++)
        cout << "*";
        for(int j=0; j< 2*(n-i)-1; j++)
        cout << " ";
        for(int j=0; j < i+1; j++)
        cout << "*";
        cout << endl;
    }
    }

    void ABCBA(int n){
        for(int i=0; i < n; i++){
            char ch= 'A';
            for(int j=0; j < i+1; j++){
            cout << ch;
            ch++;
            }

            ch--;

            while (ch >'A' )
            {
                ch--;
                cout << ch ;
            }
            cout << endl;
        }
    }

    void fancy12(int n){
        for(int i=0; i < n; i++){
            int num=1;
            for(int j=0; j < i+1; j++){
                if(i==0)
                cout << 1;
                else
                cout << "num*";
                num++;
                cout << endl;
               

                }
                

            }
        }
    


int main(){
    int n;
    cin >> n;
    // fullpyramid(n);
    // invertedfullpyramid(n);
    // diamond(n);
    // hollowpyramid(n);
    // invertedhollowpyramid(n);
    // hollowdiamond(n);
    // mixpyramid(n);
    // ABCBA(n);
    fancy12(n);
    return 0;
}
