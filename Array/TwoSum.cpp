#include<iostream>
#include<vector>
using namespace std;

class Solution{

     public:
      vector<int> twoSum(vector<int> arr , int target){
        for(int i = 0 ; i < arr.size() ; i++){
            for (int j=i+1 ; j< arr.size(); j++)
            {
                if(arr[i] + arr[j] == target){
                    return {i , j};
                }
            }
            
        }
        return {};
      }
};
int main(){
    vector<int> arr = {5,4,1,2,3};
    int target = 3;
    Solution obj;
    vector<int> result = obj.twoSum(arr,target);
    cout<<result[0] <<" "<<result[1]<<endl;
    return 0;

}