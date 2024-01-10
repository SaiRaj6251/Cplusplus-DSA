// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+(end-start)/2);
    
   while(start<=end){ 
    if(key == arr[mid]){
        return mid;
    }
    if(key> arr[mid]){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid = (start+(end-start)/2);
   }
}
int main(){
    int even[6] = {1,4,5,6,7,8};
    int odd[5] = {4,5,6,7,9};
    int index = binarySearch(even,6,7);
    
    cout<<"Index of 7 is "<<index;
    
    return 0;
    
}