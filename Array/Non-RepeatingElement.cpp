#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    int RepeatingElemen(vector<int> &arr){
        unordered_map<int,int> mp;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }

        for(int i = 0 ; i < arr.size(); i++){
            if(mp[arr[i]] == 1){
                return arr[i];
            }
            return -1;
        }
    }
};
int main(){
    vector<int> arr = {1,1,1,33,34,65,65,78};
    Solution obj;
    int ans = obj.RepeatingElemen(arr);
    cout<<ans;
    return 0;
}