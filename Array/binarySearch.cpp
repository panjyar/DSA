#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,7,12,24};
    int key = 1;

    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;

    int mid = 0;

    while(low <= high){
        mid = (high+low)/2;
        if(key == arr[mid]){
            cout<<"Key is "<<arr[mid]<<endl;
            return 0;
        }
        else if(key > arr[mid] ){
            low = mid +1;
        }
        else if(key < arr[mid]){
            high = mid -1;
        }
    }
    cout<<"Key Not found ";
    return 0;
}