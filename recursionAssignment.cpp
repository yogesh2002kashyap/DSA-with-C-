#include <bits/stdc++.h>
using namespace std;

// int lastOccurance(string &s, int index, char target, int &ans){
//     if(index<0){
//         return ans;
//     }
//     if(s[index]==target){
//         ans = index;
//         return ans;
//     }
//     lastOccurance(s,index-1,target,ans);
// }

// int lastOccurance(string &s, int index, char target, int &ans){
//     if(index>=s.size()){
//         return ans;
//     }
//     if(s[index]==target){
//         ans = index;
        
//     }
//     lastOccurance(s,index+1,target,ans);
// }

void reverseStringRE(string &s, int start, int end){
    if(start > end){
        return;
    }
    swap(s[start], s[end]);
    reverseStringRE(s,start+1,end-1);
}

void printSubarray_inner(vector<char> s, int start, int end){
    if(end==s.size()){
        return;
    }
    
    for(int i=start; i<end; i++){
        cout << s[i] << ' ';
    }
    cout << endl;
    printSubarray_inner(s,start,end+1);
}

void printSubarray_outer(vector<char> s){
    
    
    for(int i=0;i<s.size(); i++){
        int start = i;
        int end = start;
    printSubarray_inner(s,start,end);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // string s = "/";
    vector<char> s = {'j','i'}; 
    // char target = 'x';
    // int index = 0;
    // int ans = 0;
    // int lastIndex = lastOccurance(s,index,target,ans);
    // cout << lastIndex;

    // int start = 0;
    // int end = s.size()-1;
    // reverseStringRE(s,start,end);
    // for( auto x : s){
    //     cout << x;
    // }
    printSubarray_outer(s);

    return 0;
}