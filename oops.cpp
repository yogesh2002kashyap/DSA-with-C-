#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = nullptr;

    for(int i=1; i<101; i++){
        if(head == nullptr){
        Node *newNode = new Node(i);
         head = newNode;
        }
    else{
        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        Node *newNode = new Node(i);
        temp->next = newNode;
        }
    }

    while(head != nullptr){
        if(head->next == nullptr){
            cout << head->data;
        }
        else{
            cout << head->data <<"->";
        }
        head = head->next;
    }

    return 0;
}