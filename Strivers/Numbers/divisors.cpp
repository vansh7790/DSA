#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include <algorithm>
int main(){
    vector<int> divisors;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i*i!=n){
                divisors.push_back(n/i);
            }
        }

    }
    sort(divisors.begin(), divisors.end());
    cout<<"DIVISORS:";
    for(auto i:divisors){
        cout<<i<<" ";
    }
    return 0;

}