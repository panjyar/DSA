#include<iostream>
using namespace std;

void maxheapify(int arr[] , int n , int i){
    int largest = i;
    int left = i *2;
    int right = i*2 +1;
    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest] , arr[i]);
        maxheapify(arr,n,i);
    }
}

int main(){
    int arr[100] = {-1 , 54 , 53 , 55,52 ,50};
    int n = 5;
    for(int i = n/2 ; i > 0 ; i--){
        maxheapify(arr , n , i);
    }
    cout<<"Max heapify:  ";
    
    for(int i = 1 ; i <= n ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}