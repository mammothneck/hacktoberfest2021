#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    int star=1;
    while(star<=2*i-2){
             cout<<"*";
             star++;
    }
     int k=i;
    
        int val=n-k+1;
        while(val<=n&&val>0){
            cout<<val;
            val--;
        }
        k++;
    
   cout<<endl; 
    
    i++;
    

}}

