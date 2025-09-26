#include<iostream>
using namespace std;
//printing sum   of numbers from 1 to n
int sumnum(int n){
    if(n==0) return 0;
    return n+ sumnum(n-1);    
    
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<< sumnum(n);
    return 0;
   
}
