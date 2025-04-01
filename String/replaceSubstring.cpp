#include<iostream>
using namespace std;

string replacestring(string str1 , string str2 , string newstr){
    int n = str1.length();
    int m = str2.length();
    string result = "";

    for(int i = 0 ; i < n ; i++){
        bool found = true;
        for(int j = 0 ; j < m ; j++){
            if(i+j >= n || str1[i+j] != str2[j]){
                found = false;
                break;
            }
        }
        if(found){
            result += newstr;
            i += m -1;
        }
        else{
            result += str1[i];
        }
    }
    return result;
}
int main(){
    
    string main_string = "banana is my favorite fruit. banana is healthy."  ;
    string substring_to_replace = "banana";  
    string new_substring = "apple";

    string updatedstring = replacestring(main_string , substring_to_replace , new_substring);
    cout<<updatedstring;
    return 0;
    
}