#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd"<<endl; //or your can use 'if(n%2!=0)' in place of else.
        cout<<"Wow";
    }
}