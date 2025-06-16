#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int n = str.length();
    string reverseString = "";

    for(int i = n-1 ; i >= 0 ;i--){
        reverseString += str[i];
    }

    cout<<"Reversed string is:  "<<reverseString;
    return 0;
}