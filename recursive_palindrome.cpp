#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    
}

int main(){
    string name = "abced";
    cout << endl;

    bool isPalindrome = checkPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout<<"Its a Palindrome"<<endl;
    }
    else{
        cout << "Its not a palindrome"<<endl;
    }
    return 0;
}