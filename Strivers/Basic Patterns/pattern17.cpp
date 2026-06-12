#include<iostream>
using namespace std;
int main(){
    int a;
    
    cout<<"Enter number of rows";
    cin>>a;
    for(int i=1;i<=a;i++){
       for(int j=1;j<=a-i;j++){
            cout<<"  ";
       }
       for(int j=1;j<=i;j++){
        cout<<(char)(j+64)<<" ";
       
       }
       for(int j=i-1;j>=1;j--){
        cout<<(char)(j+64)<<" ";
       }
       cout<<endl;

       }
    }


