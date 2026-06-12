#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    vector<int> arr={5,1,4,2,8};
    bubblesort(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}