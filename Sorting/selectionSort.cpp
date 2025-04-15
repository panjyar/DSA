#include<iostream>
#include<vector>
using namespace std;
class solution{
 public:
  void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
  }
};

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    solution  sol;
    sol.selectionSort(arr);

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i] << " ";
    }
    return 0;

}