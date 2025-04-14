#include<iostream>
#include<vector>
using namespace std;

class Solutions{

    public:
    int MaxConsecutive(vector<int> arr){
        int count = 0;
        int maxval = 0;
        int n = arr.size();

        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 1){
                count++;
            }
            else if(arr[i] != 1){
                count = 0;
            }
            maxval = max(count , maxval);
        }
        return maxval;
    }
};

int main(){
    vector<int> arr = {1,1,1,1,0,0,9,1,1,1};
    Solutions obj;
    int ans = obj.MaxConsecutive(arr);
    cout<<ans;
    return 0;
}