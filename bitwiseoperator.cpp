#include<iostream>
using namespace std;

void saymyname(){
    cout<<"babbar";
}
int main(){
    cout<<(3&5)<<endl;
    cout<<(5|3)<<endl;
    cout<<(5<<2)<<endl;
    cout<<(10>>1)<<endl;
    int n=32;
    if (n&1)
    {
        cout<<"odd no"<< endl;
    }
    else{
        cout<<"even no"<<endl;
    }
    saymyname();
    
    

}