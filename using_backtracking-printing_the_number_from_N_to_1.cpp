#include<iostream>
using namespace std;
// printing the number from N to 1 using backtracking 
void printbackrev(int i,int n){
    if(i>n)return;
    printbackrev(i+1,n);
    cout<<i<<endl;}

int main(){
    int n;
    cout << "enter the no. of time to be printed :";
    cin >> n;
    printbackrev(1,n);
    return 0;
}
