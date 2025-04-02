#include<iostream>
using namespace std;

void reverse(int arr[] , int k ,int n){
    int start = k;
    int end = n;
    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void reverseArray(int arr[] ,int k , int n){
    reverse(arr, 0 , n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}

int main(){
    int n , k ;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of element to rotate: ";
    cin>>k;


    cout<<"Enter the element of array: ";
    for(int i = 0 ; i <  n ; i++){
        cin>>arr[i];
    }

    cout<<"Given Array:";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    
    reverseArray(arr,k,n);

    cout<<"Reversed Array:";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}