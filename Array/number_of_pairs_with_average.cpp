#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> s;

    for(int i= 0 ; i < n ; i++){
        s.insert(arr[i]);
    }
    int count = 0;

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            int sum = arr[i] + arr[j];
            if( sum % 2 == 0){
                int avg = sum / 2;
                if(s.find(avg) != s.end()){
                    count++;
                } 
            }
        
        }
    }
    cout<<count<<endl;
    return 0;
}