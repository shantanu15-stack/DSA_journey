#include <iostream>
using namespace std;
//printing number from N to 1
void Printrev(int i, int n){
    if (i<1) return;
    cout <<i<<endl;
    Printrev(i-1,n);

}
int main(){
    int n;
    cout << "enter the no. of time to be printed :";
    cin >> n;
    Printrev(n,n);
    return 0;
}