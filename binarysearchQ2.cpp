// to get total number of occurrences in array
#include <iostream>
using namespace std;


int firstOccur(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid -1 ;

        }
        else if(arr[mid]>key){
            end = mid -1;

        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
       
    }
    return ans;
}
int lastOccur(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1 ;

        }
        else if(arr[mid]>key){
            end = mid -1;

        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
        
    }
    return ans;
}
int main(){
    int rev[7] = {3,4,5,5,5,5,7};
    cout << "Index of first occurence of 5 is "<<firstOccur(rev,7,5)<<endl;
    cout << "Index of last occurrence of 5 is "<<lastOccur(rev,7,5)<<endl;
    int number = lastOccur(rev,7,5) - firstOccur(rev,7,5) + 1;
    cout<< "The number of occurrences of 5 are "<<number<<endl; 
}