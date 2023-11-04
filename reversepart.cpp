#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

    // int n;
    // cout<<"Enter the even number: ";
    // cin>>n;
    string str;
    getline(cin,str);
    int size = str.length();

    reverse(str.begin()+0,str.begin()+(size/2));
    cout<<str;

}