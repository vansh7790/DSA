#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    int count=0;
    int sum=0;
    int left=0;
    for(int right=0;right<nums.size();right++){
        sum=sum+nums[right];
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        count=max(count,right-left+1);
    }
    cout<<count;
    return 0;
}