#include<bits/stdc++.h>
using namespace std;

void func(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Sairaj";
    cout<<endl;
    func(i+1,n);
}
int main(){
    int n;
    cin>>n;
    func(1,n);
}