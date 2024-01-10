#include<bits/stdc++.h>
using namespace std;

int count = 0;

void print(){
    if(::count == 4){
        return; // in recursion tree so as function calls each other and atlast they return to each other 
    }
    cout<<::count<<" ";
    ::count++;
    print();
}
int main(){
    print();
    
}
// Base condition is the condition that we use to stop recursion