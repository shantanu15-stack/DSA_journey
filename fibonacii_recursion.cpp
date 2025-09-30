#include<iostream>
using namespace std;
// print fibonacci series using recursion
void fibonacci(int a, int b,int n){
    if(n==0) return ;
    int c=a+b;
    cout<<c<<" ";
    fibonacci(b,c,n-1);
}

int main(){
    int n;
    cout<<"enter the number of terms in fibonacci series ";
    cin>>n ;
    if(n>=2){
        cout<<0<<" "<<1<<" "; 
    }
    
    fibonacci(0,1,n-2);
    return 0;
}
