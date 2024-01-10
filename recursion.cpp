#include<bits/stdc++.h>
using namespace std;

void print(){
    cout<<1;
    print();
}
int main(){
    print();
}
// stack overflow program as function are called again and again and they are waiting in memory and yet not completed
// The wait is called stack-overflow