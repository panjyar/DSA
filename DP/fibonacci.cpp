#include<iostream>
#include<vector>
using namespace std;


//Meamoization way
/*int fun(vector<int>& dp , int n){
    if(n <= 1){
        return n;
    }
    if(dp[n] != -1) {
       return dp[n];
    }
    return dp[n] = fun(dp , n-1) + fun(dp ,n-2);
}


int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1 , -1);
    cout<<fun(dp , n);
    return 0;
}
*/

//Tabular way
int main(){
    int n;
    cin>>n;
    int prev = 1;
    int prev2 = 0;
    for(int i = 2 ; i <= n ; i++){
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }
    cout<<prev<<endl;
}