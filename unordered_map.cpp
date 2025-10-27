#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int> table;
    table[1]=51;
    table[2]=52;
    table[3]=53;

    unordered_map<int,int>::iterator it;
    for(auto it:table){
        int key=it.first;
        int value=it.second;
        cout<<"key:"<<key<< " values"<< value<<endl;
    }


    return 0;
}