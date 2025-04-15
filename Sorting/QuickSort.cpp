#include<iostream>
#include<vector>
using namespace std;

class Solutions {
    public:
        void quicksort(vector<int> &arr, int low , int high){
            
            if(low < high){
                int pi = partition(arr, low , high);
                quicksort(arr, low , pi-1);
                quicksort(arr,pi+1 ,high);
            }

        }
    public:
        int partition(vector<int> &arr, int low , int high){
            int pivot = arr[high];
            int i = low - 1;

            for(int j = low ; j < high ; j++){
                if(arr[j] < pivot){
                    i++;
                    swap(arr, i , j);
                }
                
            }
            swap(arr, i+1 , high);
            return i+1;
        }
    public:
      void swap(vector<int> &arr , int a , int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
};


int main(){
    vector<int> arr;
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++ ){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int low  = 0 , high = n-1;

    Solutions obj;

    obj.quicksort(arr , low  , high);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}