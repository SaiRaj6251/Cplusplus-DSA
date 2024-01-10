#include<iostream>
using namespace std;

int main() {

    int arr[10];

    // arr = arr + 1..cannot occur
    int *ptr = &arr[0];
    cout  << ptr << endl;
    ptr = ptr + 1; // address goes ahead by one
    cout << ptr << endl;
}