#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int nums[]={1,2,3,4,5,6,7};
    int k=2;
    reverse(nums, nums+k);
    reverse(nums+k, nums+7);
    reverse(nums, nums+7);
    for(int i=0;i<7;i++){
        cout<<nums[i]<<" ";
    }
}