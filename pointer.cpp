#include<iostream>
using namespace std;

int main(){
int d = 5;
int *ptr = &d;
ptr = &d;
cout << "value of *ptr is " << *ptr << endl;
cout << "address of *ptr is " << ptr << endl;
cout << "address of d is " << &d << endl;
*ptr = 20;
cout << "value of *ptr is " << *ptr << endl;
cout << "value of d is " << d << endl;

cout << "size of d is " << sizeof(d) << endl;
cout << "size of *ptr is " << sizeof(ptr) << endl;

int a = 5;
int e = a;
e++;
cout << "value of a is " << a << endl;
cout << "value of e is " << e << endl;
int *p = &a;
cout << "before value of a is " << a <<endl;
(*p)++;
cout << "after value of a is " << a <<endl; 

int *q = p;
cout << "address of *q is " << q <<endl;
cout << "address of *p is " << p <<endl;
cout << "value of *q is " << *q << endl;
cout << "value of *p is " << *p <<endl;

int z = 3;
int *j = &z;
cout << (*j)++ << endl;
(*j)++;
cout << (*j)++ << endl;
cout << (*j)++ << endl;
// j = j + 1 if done then it jumps to next character i.e now it points to next address which is just to right to intial address...jumps ahead by 4 bytes...goest to next int location
}