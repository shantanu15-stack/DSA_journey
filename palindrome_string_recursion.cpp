#include<iostream>
using namespace std;
// check wheater string is palindrome or not using recursion
bool ispalindrome(string s,int f,int l){
    if(s[f]!=s[l]) return false;
    if(s[f]==s[l]) return true;
    return ispalindrome(s,f+1,l-1);    
}
int main(){
    string s;
    cout<<"enter the string ";
    cin>>s;
    int n=s.length();
    if(ispalindrome(s,0,n-1)){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }
    
    return 0;
}
