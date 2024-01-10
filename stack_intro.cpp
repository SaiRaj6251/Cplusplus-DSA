// stack basic part

#include<iostream>
using namespace std;
#include<stack>

int main(){

    stack<int> s;

    s.push(3);
     s.push(4);
     s.pop();
    cout << s.top() << endl;
    cout << s.empty();

}