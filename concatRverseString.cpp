/*Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"
Input : str = "pw"
Output : "pwwp"*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    string reverseStr = s;
    reverse(s.begin(),s.end());
    cout<<reverseStr + s;

}
