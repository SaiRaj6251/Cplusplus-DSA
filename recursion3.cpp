// bactrack....AS PRINTED AFTER THE FUNCTION CALL
// print linearly from 1 to n
// dont use i++
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i<1){
        return;
    }
    f(i-1,n);
    cout<<i;
}
int main(){
    int n;
    cout<<"Enter the input:"<<endl;
    cin>>n;
    f(n,n);

}