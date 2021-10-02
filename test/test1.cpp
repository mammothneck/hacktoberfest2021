#include<iostream>
using namespace std;

int main() {
       int n;
       cin>>n;
       long long int bin=0;
    int rem=0;
    int i=1;
    while(n>0){
        rem=n%2;
        bin=bin+rem*i;
        i=i*10;
        n=n/2;      
    }
    cout<<bin;
}

// #include<iostream>
// using namespace std;

// int main() {
//        long long n;
//        cin>>n;
//     long long a[10];
//     long long rem;
//     long long i=0;
//     if( n==0){
//         cout<<"0";
//     }
//     else{
//     while(n>0){
//         rem=n%2;
//        a[i] = rem;
//         n=n/2; 
//         i=i+1;
//     }
//     for( long long j=i-1;j>=0;j--){
//         cout<<a[j];
//     }
//     }
//     return 0;
// }
