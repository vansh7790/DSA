#include<iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(int);
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    return 0;
}