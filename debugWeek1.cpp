#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1
	// char c;
    // cin>>c;
    // if('a'<=c && c<= 'z'){
    //     cout<<0;
    // }
	// else if('A'<=c && c<= 'Z'){
    //     cout<<1;
    // }
    // else{
    //     cout<<-1;
    // }

    // Debug the code. It is trying to print the given pattern.
     /*
    Pattern
    1
    23
    345
    4567
    */
    // int n;
    // cin >> n;
    // int i=1;
    // while(i<=n){
    //     int j = i,count = 1;
    //     while(count<=i){
    //         cout<<j;
    //         j = j + 1;
    //         count = count +1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }

// Debug the code. It is trying to print the given pattern.

/*
Pattern
N = 4
1
22
333
4444
*/
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }

// Debug the code. It is trying to print the given pattern.

    /*
Pattern
N = 4
1
21
321
4321
*/

//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//        int p=i;
//         for(j=1;j<=i;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;
        
//     }

/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
    // int i,j,n;;
    // cin>>n;
    
    // for(i=1;i<=n;i++){
    //     char p='A'+ n-i;
    //     for(j=1;j<=i;j++){
    //         cout<<p;
    //         p++;  
    //     }
    //     cout<<endl; 
    // }
    
    /*
Pattern
N = 4
   1
  232
 34543
4567654
*/

    // int no;
    // cin>>no;
    // int i=1;
    // int n = 2*no;
    // while(i<=(no)){
    //     int gaps = n-2*i+1,k=1;
    //     int j = i;
    //     while(k<=gaps/2){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     int ch = n - gaps + 1, z = 0;
    //     while(z<ch/2){
    //         cout<<j;
    //         j = j + 1;
    //         z = z + 1;
    //     }
    //     j = j - 1;
    //     z = (ch-1)/2;
    //     while(z>=1){
    //         j = j - 1;
    //         cout<<j;
    //         z = z - 1;
    //     }
    //     k = 1;
    //     while(k<=gaps/2){
    //         cout<<" ";
    //         k = k + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }

    /*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
    int i=1;
    while(i<(n)){
        int gaps = n-2*i,k=1;
        if(i>(n)/2){
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - 1 - gaps;
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

    


    

    return 0;
}