#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solutions {
    public:
     vector<int> union2array(vector<int> &a , vector<int> &b){
        set<int> s;
        for(int num:a){
            s.insert(num);
        }
        for(int num:b){
            s.insert(num);
        }

        vector<int> result(s.begin() , s.end());
        return result;
     }
};

int main(){
    vector<int> a = {4,5,6,7,7,8};
    vector<int> b = {1,2,3,4,5,6,7};

    Solutions obj;

    vector<int> result = obj.union2array(a , b);

    for(int num : result)
        cout<<num<<" ";


    return 0;
}