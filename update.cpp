/*Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"
input : str = "a"
Output : "a"*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int len = s.length();
    for(int i=0;i<s.length();i++){
        if(i%2!=0){
            s[i] = '#';   
        }
    }
    cout<<s;
}