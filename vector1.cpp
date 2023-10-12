// we cant modify the size of array and that is where concept of vector arises
// when we dont know the size of the array we use vector
#include<bits/stdc++.h>
using namespace std;

void vectorSpace(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(5);

    vector <pair<int,int>> p ;
    p.push_back({1,2});
    p.emplace_back((3,4));

    vector <int>a(5,100); // container a containing 5 instances of 100
    vector <int>c(a); //copied vector a to c 
    a.push_back(8);

    vector <int>b(5); //container with 5 instances of 0
}
// using v.begin() is directly going inside the memory and not the element 
// unlike v.begin() which points at the first element even though the above point is taken into consideration...
// ... but the rend() i.e the reverse end points before the first element i.e free space it begins with
// v.back() means the element which is at the last