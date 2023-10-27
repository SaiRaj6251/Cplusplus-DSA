
// void explainList(){

// list<int> ls;

// ls.push_back(2); {2}
// ls.emplace_back(4); {2,4}

// ls.push_front(5); {5,2,4}

// ls.emplace_front(); {2,4}

// }

// insert in vector takes a lot of time and in list internal operation occur in doubly link list while 
//  in vector singly linked list so push_front is very cheap in terms of time complexity
// rest functions same as vector
// begin, end, rbegin , rend, clear, insert, size, swap