#include<iostream>
using namespace std;
int main(){
    int x;
    int n=1;
    cout<<"Enter number of rows:";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
}
