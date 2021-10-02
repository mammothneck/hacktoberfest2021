#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    while(k<=n){
        int val=n-k+1;
        while(val<=n&&val>0){
            cout<<val;
            val--;
        }
        k++;
        cout<<endl;
    }
}