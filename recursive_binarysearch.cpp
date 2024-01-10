#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for (int i =s;i<=e;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

bool binarysearch(int *arr, int s , int e , int k){
    cout << endl;
    print(arr,s,e);

    // base case
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    // base case
    if(arr[mid] == k){
        return true;
    }

    

    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int key = 5;

    int ans = binarysearch(arr,0,4,5);
    if(ans==true){
        cout << "Yes the key is present";
    }
    else{
        cout << "No the key is not present";
    }

    return 0; 
}