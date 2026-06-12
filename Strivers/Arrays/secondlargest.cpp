#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(int);
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>largest){
            secondlargest=largest;
            largest=nums[i];
        }
    else if(nums[i]>secondlargest&&nums[i]!=largest){
            secondlargest=nums[i];
        }
    }
    if(secondlargest==INT_MIN){
        cout<<"There is no second largest number."<<endl;
    }
    else    
    cout<<"Second largest number is: "<<secondlargest<<endl;
    return 0;
}