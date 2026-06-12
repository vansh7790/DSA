#include<iostream>
#include<climits>
using namespace std;
int main(){
    int numbers[]={1,2,3,4,5};
    int n=sizeof(numbers)/sizeof(int);
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(numbers[i]>largest){
            largest=numbers[i];
        }
    }
    cout<<"Largest number is: "<<largest<<endl;
    return 0;
}