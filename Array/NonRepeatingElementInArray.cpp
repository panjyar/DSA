#include<iostream>
#include<unordered_map>
using namespace std;
void RepeatingElement(int arr[] , int n ){
    unordered_map<int , int> freq;

    for(int i=0 ; i < n ; i++){
        freq[arr[i]]++;
    }

    for(int i =0 ; i < n ; i++){
        if(freq[arr[i]] == 1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array element: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0 ; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Non Repearting Element in array was: ";
    RepeatingElement(arr, n);
    return 0;
}