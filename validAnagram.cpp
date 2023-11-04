/*Given an array of strings. Check whether they are anagram or not.
Input : s = "car" , t = "arc"
Output : True
Input : s = "book" , t = "hook"
Output : False*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="book";
    string t = "hook";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s.length()!=t.length()){
        cout<<false;
    }else{
        bool flag = true;
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                flag = false;
                break;
            }
        }
        cout<<flag;
    }
}