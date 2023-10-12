#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        
        long long arr[] = {a, b, c};
        sort(arr, arr + 3);
        
        
        if (arr[0] == arr[1] && arr[1] == arr[2]) {
            cout << "YES" << endl;
        } else if (arr[0] == arr[1] && arr[2] % 2 == 0 && arr[0] % 2 == 0) {
            
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}





