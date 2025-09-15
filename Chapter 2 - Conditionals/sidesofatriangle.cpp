#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st Side: ";
    cin>> a;
    int b;
    cout<<"Enter 2nd Side: ";
    cin>> b;
    int c;
    cout<<"Enter 3rd Side: ";
    cin>> c;
    if((a+b)>c && (b+c)>a && (c+a)>b){     //Use bracket () for things 
        cout<<"A Triangle can be formed."; //that is needed to be done first 
    }
    else{
        cout<<"A Triangle can't be formed.";
    }
}