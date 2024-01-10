// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start +(end-start)/2;
    int ans= -1;
    
    while(start<=end){
        if(key == arr[mid]){
            ans = mid;
            end = mid -1;
            
        }
        else if(key< arr[mid] ){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        mid = start +(end-start)/2;
    }
    return ans; // error was occurring here
}
int lastOccur(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start +(end-start)/2;
    int ans= -1;
 
    
    while(start<=end){
        if(key == arr[mid]){
            ans = mid;
            start = mid +1;
            
        }
        else if(key< arr[mid] ){
            end = mid -1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        mid = start +(end-start)/2;
        
    }
    return ans; // error was occurring here
}
int main() {
    int array[6] = {2, 5, 6, 8, 8, 9};
    cout << "The first occurrence of 8 is " << firstOccur(array, 6, 8) << endl;
    cout << "The last occurrence of 8 is " << lastOccur(array, 6, 8) << endl;
    return 0;
}