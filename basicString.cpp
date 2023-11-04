#include<bits/stdc++.h>
using namespace std;
int main(){
    // string st = "raghav";
    // int countVowels = 0;
    // for(int i=0;st[i]!='\0';i++){
    //     if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'){
    //         countVowels++;
    //     }
    // }
    // cout<<countVowels;
    int n;
    cin>>n;
    char st[n];
    int countVowels = 0;
    for(int i =0;i<n;i++){
        cin>>st[i];
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'){
        countVowels++;   
        }
    }
    cout<<countVowels;
}