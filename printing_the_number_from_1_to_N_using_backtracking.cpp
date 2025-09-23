#include <iostream>
using namespace std;
// printing the number from 1 to N using backtracking 
void printback(int i,int n){
    if(i<1)return;
    printback(i-1,n);
    cout<<i<<endl;
    // printing the value after function call (backtracking)
    // so when if condition fails it returns to the previous function call and prints the value of 
    
}
int main(){
    int n;
    cout << "enter the no. of time to be printed :";
    cin >> n;
    printback(n,n);
    return 0;
}
