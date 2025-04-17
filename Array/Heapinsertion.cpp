#include<iostream>
using namespace std;

class Heap {
    public:
     int arr[100] ;
     int size = 0;
     Heap(){
        arr[100] = -1;
        size = 0;
     }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }

    }
    void print(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap() {
        if(size == 0) {
            cout<<"Empty Heap"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index < size) {
            int leftindex = index * 2;
            int rightindex = index * 2 + 1;
            if(leftindex < size && arr[leftindex] > arr[index]){
                swap(arr[leftindex] , arr[index]);
                index = leftindex;
            }
            else if(rightindex <size && arr[rightindex] > arr[rightindex]){
                swap(arr[rightindex] , arr[index]);
                index = rightindex;
            }
            else {
                return;
            }
        }
    }

};


int main(){
    Heap h;
    h.insert(50);
    h.insert(45);
    h.insert(20);
    h.insert(10);
    h.insert(55);
    h.deleteFromHeap();
    h.deleteFromHeap();
    h.print();
    return 0;
}