#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
        int secondgreat=INT_MIN;

    int firstno;
    int secondno;
    if(n==0){
         cout<<secondgreat;
         return 0;
    }
    cin>>firstno;
    int max=firstno;
    
    while(i<=n-1){
        int x;
        cin>>x;

        if(max<x){
            secondgreat=max;
            max=x;

        }
        else if(secondgreat<x&&max!=x){
            secondgreat=x;
        }
        

       
        
        i++;

    }
    cout<<secondgreat;

}