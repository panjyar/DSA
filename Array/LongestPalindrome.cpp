#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int temp = n ;
    int rem = 0;
    int result = 0;
    while (temp>0)
    {
        rem = temp % 10;
        result = result*10 + rem;
        temp = temp/10;
    }
    if(n == result){
        return true;
    }
    return false;
    
}

int main(){
    int arr[] = {1 , 55 , 7467 , 5455455 , 111};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = -1;
    for(int i = 0 ; i < n ; i++){
        if(ispalindrome(arr[i]) && result < arr[i]){
            result = arr[i];
        }
    }

    cout<<"Palindrome: "<<result<<endl;
    return 0;
}