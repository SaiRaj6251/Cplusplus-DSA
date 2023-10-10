using namespace std;
#include<bits/stdc++.h>

void std2(){
    pair<int,int>p = {1,3};
    cout<<p.first<<"";
    pair<int,pair<int,int>>s = {1,{2,3}};
    cout<<s.second.second;
}
int main(){
    std2();
}