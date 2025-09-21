#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//printing number from 1 to N
void Print(int i,int n){
    if (i > n){
    return;
}
cout << i << endl;
Print(i + 1, n);
}
int main()
{
    int n;
    cout << "enter the no. of time to be printed :";
    cin >> n;
    Print(1, n);
}
