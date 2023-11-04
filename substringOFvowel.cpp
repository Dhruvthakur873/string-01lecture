/*Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
Input : str = "hgdhpw"
Output : 0*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0;
    string s = "hgdhpw";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
            for(int j =i+1;j<s.length();j++){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                count++;
                }
                else{
                    j = s.length();
                }
            }
        }
    }
    cout<<count;
}
