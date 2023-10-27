// to distinguish people by giving key and value like 
// key is roll no. and value is name

/*
    void explainMap(){

        map<int,int>mpp; // 1 key 1 value
        map<int,pair<int,int>>mpp; // 1 key 2 values
        map<pair<int,int>,int>mpp; // 2 key 1 value

        mpp[1] = 2;  // key =1,value = 2
        mpp.emplace({3,1}); // key = 3, value = 1
        mpp.insert({2,4});
        mpp[{2,3}] = 10; //key = {2,3} and value = 10
        
    }
    // map stores unique keys in sorted order(keys)
    for(auto it : map){
        cout << it.first << "" << it.second << endl;
    } 
    // example, [{1,2}, {2,6},{3,4}] so 1 2 2 6 3 4
    cout<<map[1]; // value = 2
    cout<<map[5]; // value = 0
    auto it = mpp.find(3); // gets the place or address of key 3
    cout<<*(it).second; // to get value (value will be 4)

    auto it = mpp.find(7); // mpp.end() ...or after the map

    // erase, swap, size , empty are same as above

    // auto it = mpp.lower_bound(2);
    // auto it = mpp.upper_bound(3);

*/