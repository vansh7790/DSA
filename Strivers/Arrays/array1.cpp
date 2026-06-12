#include<iostream>
using namespace std;
void changearr(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]+1;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    changearr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     return 0;

}