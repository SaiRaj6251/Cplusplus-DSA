#include<iostream>
using namespace std;

class Node{

    public: 
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAtHead(Node* &head,int d){ //reference taken for head in linked list so as to no make copy of linked list but update the original linked list

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

// to traverse a linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << "";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    // created a new Node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    return 0;
}