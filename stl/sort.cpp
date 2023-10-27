/* to sort a container (vector and arrays not map) 

    void sortExplain(){

        sort(a,a+n);
        sort(v.begin(),v.end());

        sort(a+2,a+4); // only sort the given values
    }



    //  to sort in descending order:
    // sort(a,a+n,greater<int>); // here inbuilt comparator is used
*/


/*

    to sort it in our way:


    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    Condition is to sort according to second element if second element is smae, then sort according to first element but descending
    Goal is to make: {{4,1},{2,1},{1,2}}
    (condition is combination of increasing as well as decreasing)

    comparator is a self-written comparator and a boolean function
    bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second < p2.second) return true;
        if(p1.second < p2.second) return false; ...swap case

        // they are same i.e the second element of pair
        if(p1.first >= p2.first) return true;
        if(p1.first < p2.first) return false;


    }
*/


/*
    int num = 7;
    int cnt = __builtin_popcount(); // gives number of 1's in binary number of 7

    long long num = 143534645;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(),s.end()); ...so that we get all permutation from the start
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));
    // loop will break when it will return false as no more permutation
    // permutation are like in descending order
*/


// to get max element from an array of {1,10,5,6}
// int maxi = *max_element(a,a+n);
// (similarly for min_element)