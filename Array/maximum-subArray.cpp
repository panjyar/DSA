// using Kadane’s Algorithm 
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_sum = nums[0];
        int current_sum = nums[0];
        for(int i = 1 ; i < n ; i++){
           current_sum = max(current_sum + nums[i] , nums[i]);
           max_sum = max(current_sum , max_sum);
        }
        return max_sum;
    }
};
int main(){
    int n = 5;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    Solution obj;
    cout<<"Maximun subArray is  "<<obj.maxSubArray(nums);
    return 0;
}