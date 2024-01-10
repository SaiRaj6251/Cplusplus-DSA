#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout << "Size of array is "<< n << endl;

    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }cout << endl;
}

bool linear_search(int *arr, int size,int target){
    print(arr,size);
    if(size == 0){
        return false;
    } // no element in array
    if(arr[0] == target){
        return true;
    }
    else{
        bool remainingPart = linear_search(arr+1,size-1,target);
        return remainingPart;
    }
}

int main() {

    
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int target = 1;

    bool ans = linear_search(arr,size,target);

    cout << "The target is "<< ans << endl; 
    if(ans==true){
        cout << "Yes the target value is present " << endl;

    }
    else{
        cout << "No the target value is not present" << endl;
    }

}