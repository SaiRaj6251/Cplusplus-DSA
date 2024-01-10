#include<iostream>
using namespace std;

int sum(int *arr, int size){
   
    int n;
    int isum = 0;
    if(size == 0){
        return isum = 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }
    else {
        int remainingPart = sum(arr+1,size-1);
        int final_sum =  arr[0] + remainingPart;
        return final_sum;
       
    }

}

int main(){
   

    int arr[5] = {2,3,4,5,6};
    int size = 5;

    int ans = sum(arr,size);

    cout << "The final sum is "<< ans << endl; 

}
