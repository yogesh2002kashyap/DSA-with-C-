#include<iostream>
using namespace std;
int main(){
    int budget;
    cout<< "enter your budget"<< endl;
    cin >> budget;
    if(budget>20000){
        cout<<"you can buy scarpio"<<endl;
    }
    else{
        cout<<"you can not buy"<<endl;
    }
    return 0;
}