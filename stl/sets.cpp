/*
void explainSet(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2} ...no insertion
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // functionality of insert in  vector
    // can be use also that only increases efficiency

    // set stores everything in sorted order and stores unique

}

//  auto it = st.find(3); // returns an iterator which points to 3 in {1,2,3,4,5}
// auto it = st.find(6); // 6 is not present so it will return "st.end()" as after 5 nothing is present
st.erase(5); // erases 5 ....takes logn time

int cnt = st.count(1); // gives number of occurrences of 1 and if not then 0

auto it = st.find(3);
st.erase(it); ...it takes constant time


auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1,it2); // erases between 2 and 4
*/


// take a look at lower and upper bound concept
//  auto it = st.lower_bound(2);
// auto it = st.upper_bound(3);