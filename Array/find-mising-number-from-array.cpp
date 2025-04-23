#include<iostream>
#include<vector>
using namespace std;

class Solutions{

    public: 
    findMissing(vector<int> nums){
        int n = nums.size();
        vector<int> temp(n+1 , -1);
        int m = temp.size();

        for(int i =0 ; i< n ; i++){
            temp[nums[i]] = nums[i];
        }

        for(int i = 0 ; i < m ; i++){
            if(temp[i] == -1){
                return i;
            }
        }
        return 0;
    }
};

int main(){
    vector<int> arr = {5,4,1,6,3,2,0};
    
    Solutions obj;
    int num = obj.findMissing(arr);
    cout<<"Missing Number was: "<<num;
    return 0;
}