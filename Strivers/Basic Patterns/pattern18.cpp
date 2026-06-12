#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=70-i;j<=70-1;j++){
            cout<<(char)(j)<<" ";
        }
        cout<<endl;
    }
}
