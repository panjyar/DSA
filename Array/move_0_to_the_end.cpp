#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& arr) {
            int count = 0 ;
            int n = arr.size();
            
            for(int i = 0 ; i < n ; i++){
                if(arr[i] != 0)
                swap(arr[count++] , arr[i]);
            }
        }
    };

int main(){
    vector<int> arr = {1,0,2,34,0,76};
    Solution obj;
    obj.moveZeroes(arr);
    for(const int val: arr ){
        cout<<val<<" ";
    }
    return 0;
}