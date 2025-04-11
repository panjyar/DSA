#include<iostream>
using namespace std;

class solutions{
    public:
        int climbStairs(int n){
            int prev1 = 1 ;
            int prev2 = 1;

            for(int i = 2 ; i<=n ; i++){
                int countstairs = prev1 + prev2;
                prev2 = prev1;
                prev1 = countstairs;
            }
            return prev1;
        }
};

int main(){
    int n;
    cout<<"Enter the number of stairs case to climb: ";
    cin>>n;

    solutions sol;
    cout<<"Distinct ways can you climb to the top: "<<sol.climbStairs(n);

    return 0;
}