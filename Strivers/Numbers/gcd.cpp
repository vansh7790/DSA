#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    
    while(num2!=0){
        int rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    cout<<"GCD: "<<num1<<endl;
     return 0;
}