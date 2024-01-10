// to implement stack using array we need :-
// int top, int *arr, int size

// in push operation check if space is available
// push : top = -1 so while inserting top++ and arr[top]=22;

// while popping element : check element is present
// if yes : top -- , if no : stack underflow

// empty operation :- 
// top = -1 so stack is empty

// top() :- return arr[top] and conditions are top = -1 and top < size
#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this -> size = size; // this -> size is equivalent to (*this).size
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow"<<endl;
        }
    }
    int peek(){
        if(top >= 0 && top < size)
            return arr[top];
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty(){
        if( top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    Stack st(5);
    st.push(43);
    st.push(22);

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
}


