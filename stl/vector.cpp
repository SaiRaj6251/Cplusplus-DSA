#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //similar to push_back but dynamically increases its size and pushes at the back
    // emplace_back is faster than push_back

    vector<pair<int,int>>k;

    k.push_back({1,2});
    k.emplace_back(1,2);

    vector<int> p(5,100); // container p containing 5 instances of 100
    vector<int> l(5); // container l containing 5 instances of any garbage value or 0

    vector<int> v1(5,20);
    vector<int> v2(v1);  // container v2 copied values of v1

}