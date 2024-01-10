#include<iostream>
using namespace std;
#include<stack>

class Stack{
    // properties
    public : 
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int(size);
        top = -1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;

        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }
    void pop(){
        if(top >= 0) {
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }
    int peek(){

    }
    bool isEmpty(){

    }
};
int main(){

}