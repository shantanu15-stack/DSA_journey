#include<iostream>
using namespace std;
// print fibonacci series using recursion
void fibonacci(int a, int b,int n){
    if(n==0)return;
    cout<< a+b;
    fibonacci(b,a+b,n-1);
}
int main(){
    int n;
    cout<<"enter the number of terms in fibonacci series ";
    cin>>n ;
    fibonacci(0,1,n);
    return 0;
}
