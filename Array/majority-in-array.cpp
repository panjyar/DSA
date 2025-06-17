#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0 , candidate = -1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(count == 0 ){
                candidate = nums[i];
            }

            if(nums[i] == candidate) count ++;
            else count--;
        }

        count = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == candidate) count++;
        }
        if(count > n/2){
            return candidate;
        }
        else return -1;
    }
};

int main(){
    vector<int> nums ={3,3,3,2,1};
    Solution obj;
    int n = obj.majorityElement(nums);
    cout<<"majority element was: "<<n;
    return 0;
}