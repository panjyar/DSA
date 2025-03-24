#include<iostream>
using namespace std;
int main(){
    char str[100] = {};
    int n , freq[256] ={0};
    
    cout<<"Enter the size of word that you want to enter ";
    cin>>n;

    cout<<"Now! Enter the word: ";
    for(int i = 0 ; i < n ; i++){
        cin>>str[i];
    }

    for(int i = 0 ; str[i] != '\0' ; i++){
        freq[str[i]]++;
    }

    cout<<"Non repeating element are : ";
    for(int i = 0 ; i < 256 ; i++){
        if(freq[i] == 1){
            cout<<char(i)<<" ";
        }
    }
    return 0;
}