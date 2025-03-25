#include<iostream>
using namespace std;

void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int arr[] = {5,6,4,2,8};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp[100];
    
    for(int i = 0 ; i < n ;i++){
        temp[i] = arr[i];
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(temp[j] > temp[j+1]){
                swap(&temp[j] , &temp[j+1]);
            }
        }
    }

   

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i] == temp[j]){
                arr[i] = j+1;
                break;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}