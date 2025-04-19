#include<iostream>
#include<vector>
using namespace std;

class Solutions {

    public:

    int FindSingleNumber(vector<int> &arr){
        int result = 0;
        for(int i:arr){
            result ^= i;
        }
        return result;
    }
};

int main(){
    vector<int> arr = {4,4,2,1,1};

    Solutions obj;
    cout<<obj.FindSingleNumber(arr);

    return 0; 
}