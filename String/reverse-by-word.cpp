#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "I Love India";
    int n = str.length();

    reverse(str.begin() , str.end());

    string ans = "";

    for(int i=0 ; i < n ; i++){
        string word ="";
        while(i < n && str[i] != ' '){
            word += str[i++];
        }
        reverse(word.begin() , word.end());
        ans += " " + word;
    }
    cout<<ans;
    return 0;
}