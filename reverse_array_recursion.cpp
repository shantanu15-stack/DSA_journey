#include<iostream>
using namespace std;
// reversing an array using recursion 
void reverse(int arr[],int f,int l){
    if(f>l) return;
    swap(arr[f],arr[l]);
    reverse(arr,f+1,l-1);

}
int main(){
    //enter size of array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }    
    reverse(arr,0,n-1);
    // reversed array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}