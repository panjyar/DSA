#include<iostream>
#include<vector>
using namespace std;

class solutions {
    public:
    void InsertionSort(vector<int> &arr , int n){
        for(int i = 1 ; i < n ;i++){
            int  key = arr[i];
            int j = i-1;
            while(arr[j] > key && j>=0){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }
};
int main(){

    vector<int> arr;
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    solutions sol;

    sol.InsertionSort(arr,n);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<"  ";
    }
}