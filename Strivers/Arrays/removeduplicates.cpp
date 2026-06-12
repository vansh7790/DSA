#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,2,3,4,4,5};
    int n=sizeof(nums)/sizeof(int);
   int j=1;
   for(int i=1;i<n;i++){
    if(nums[i]!=nums[j-1]){
        nums[j]=nums[i];
        j++;
    }
   }
    for(int i=0;i<j;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}