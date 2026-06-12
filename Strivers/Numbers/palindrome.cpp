#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num<0){
        cout<<"Not a palindrome";
        return 0;
    }
    int rev=0;
    int x=num;
    while(x>0){
        int rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    if(rev==num){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}