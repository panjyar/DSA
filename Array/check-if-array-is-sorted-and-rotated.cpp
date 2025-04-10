#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool check(vector<int>& nums) {
            int n = nums.size();
            int count = 0;

            for(int i =0 ; i < n ; i++){
                if(nums[i] > nums[(i+1)%n]) count++;
            }
            return count<=1;
        }
    };

int main(){
    vector<int> arr = {1,22,3,4 };
    Solution obj;
    cout<<obj.check(arr);
    return 0;
}