// follows only sorted but not unique
/* void explainMultiSet(){

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one is erased
    ms.erase(ms.find(1));...by giving address

    ms.erase(ms.find(1),ms.find(1)+2);...deletes both

    // rest all functions are same as set
}
*/