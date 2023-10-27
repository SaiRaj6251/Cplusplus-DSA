/* #include<bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int>::iterator it = v.begin(); //points to the memory address not the element

// it++;
// cout << *(it) << " "; //points to the element

it = it + 2;
cout << *(it) << "";

vector<int>::iterator it = v.end(); // points after end element
vector<int>::iterator it = v.rend(); // points before start element
vector<int>::iterator it = v.rbegin(); // points at the starting element 
// iterator points to the memory address

cout << v[0] << ""<<v.at(0);
cout <<v.back()<<""; // v.back() means last element

// printing the vector
for  (vector<int>::iterator it = v.begin();it != v.end();it++){
    cout<<*(it)<<"";
}
// to avoid large syntax use:
for(auto it = v.begin();it!=v.end();it++){
    cout<<*(it)<<"";
} // auto automatically declares it as a vector

// auto a = "raj" ; // automatically declared as a string

// other way for printing the vector is for-each loop
for (auto it : v){
    cout<<it<<"";
}

// deletion of a vector
v.erase(v.begin()+1); // {10,20,30,40} so here 20 is deleted

// to delete 20 and 30 in 10,20,30,40,50 
// so v.erase(st,end) where start st = v.begin()+1 and end = v.begin()+3

// Insert function
// vector<int>v(2,100); {100,100}
// v.insert(v.begin(),300); {300,100,100}
// v.insert(v.begin()+1,2,10); {300,10,10,100,100}

// vector<int> copy(2,50); {50,50}
// v.insert(v.begin(),copy.begin(),copy.end()); // from {300,10,10,100,100}

// cout<< v.size(); ...{10,20} // 2

// {10,20} ..v.pop_back(); {10}

// v1 -> {10,20} v2-> {30,40}
// v1.swap(v2); ...v1 -> {30,40} , v2 -> {10,20}

// v.clear(); erases the entire vector

// v.empty(); if nothing exist in vector so it shows true
*/