#include<iostream>
using namespace std;

void minheapify(int arr[] , int n , int i ){
    int smallest = i;
    int left = i*2;
    int right = i*2+1;
    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    if(smallest != i){
        swap(arr[smallest] , arr[i]);
        minheapify(arr, n , smallest);
    }
}

int main(){
    int arr[] = {-1 , 54 , 53 ,55, 52,50};
    int n = 5;
    for(int i = n/2 ; i > 0 ; i--){
        minheapify(arr , n , i);
    }

    cout<<"Min heapify: ";
    for(int i = 1 ; i <=n ; i++){
        cout<<arr[i]<<" ";
    }
}