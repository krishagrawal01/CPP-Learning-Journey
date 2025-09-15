#include<bits/stdc++.h>
using namespace std;
int main(){
    int cp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    int sp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit: "<<((sp-cp)*1.0/cp)*100; // or <<float(sp-cp)/cp*100
    }
    else if(sp<cp){
        cout<<"Loss: "<<((cp-sp)*1.0/cp)*100;
    }
    else{
        cout<<"No Profit or No Loss";
    }
}