#include<stdio.h>
#include<stdlib.h>

void maxheapify(int arr[],int ,int);

void maxheap(int arr[],int s, int e){
    int i;
    for(i=e/2 ; i>=s ; i--){
        maxheapify(arr,i,e);
    }
}


void maxheapify(int arr[] ,int f ,int n){

     int max=f ,l=2*f ,r=f*2+1 ;
     if(l <= n && arr[l] > arr[max]){
         max=l;
     }
     if(r <=n && arr[r] >arr[max]){
         max=r;
     }
     
     if(f != max){
        int temp = arr[f];
             arr[f]=arr[max];
             arr[max]=temp;
         maxheapify(arr,max,n);
     }
}




void heapsort(int arr[], int n){
    int i,t;
    for(i=n ;i>=2;i--){
         int temp = arr[1];
             arr[1]=arr[i];
             arr[i]=temp;
        maxheapify(arr,1,i-1);
    }
}

int main() {
    int arr[100];
    int n;
    scanf("%d" ,&n);
    
    for(int i=0 ; i< n ;i++){
        scanf("%d" , &arr[i]);
    }
    
    maxheap(arr,1,n-1);
    heapsort(arr,n-1);
    
    for(int i=1 ;i<n ;i++){
        printf("%d   ",arr[i]);
    }
}
