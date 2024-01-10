#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,6};

    cout << " Address of first memory block of array is " << arr << endl;
    cout << " Address of first memory block of array is " << &arr[0] << endl;

    cout << *arr << endl;
    cout << arr[0] <<endl; 
    cout << *(arr + 1) << endl;
    cout << *arr + 1 << endl;
    cout << (*arr) + 1 << endl;
    // arr[i] = *(arr + i)
    // true : i[arr] = *(i + arr)

    int i = 3;
    cout << i[arr] << endl;

    int temp[10] = {1,2};
    cout << sizeof(temp) << endl;
    cout << "1st " << sizeof(*temp) << endl;
    cout << "2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

    int a[20] = {1,2,3,4,5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl; // adddress of p block


    return 0;
}
// content of symbol table cannot be changed