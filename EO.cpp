#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter the value"<<endl;
    cin>>a;
    
    if(a%2==0){
        cout<<"Even number : "<<a<<endl;
    }
    else {
        cout<<"Odd : "<<a<<endl;
    }

   return 0;
}