#include<iostream>
using namespace std;



int main()
{
  int n;
  cin>>n;
   int i=1;
   int sum=0;
   int lastterm=0;
   int firstterm=1;
   while(i<=n){
        sum=lastterm+firstterm;
        lastterm = firstterm;
        firstterm=sum;
        if(sum==n){
            cout<<"true";
        }
        // cout<<sum;
        i=i+1;
   }
   cout<<"false";
return 0;
}
