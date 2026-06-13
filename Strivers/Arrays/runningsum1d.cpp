#include<iostream>
#include<vector>
using namespace std;
    vector<int> runningSum(vector<int>& nums) {
        vector<int> duplicate=nums;
        for(int i=1;i<nums.size();i++){
            duplicate[i]=duplicate[i]+duplicate[i-1];
        }
        return duplicate;
        
    }

    int main(){
        vector<int> arr={1,2,3,4};
        vector<int> ans=runningSum(arr);
        for(auto i:ans){
            cout<<i<<" ";
        }
        return 0;
    }