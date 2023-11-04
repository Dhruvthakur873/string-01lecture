#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s = "daanceerrr";
    // sort(s.begin(),s.end());
    // int mc=0;
    // int a =1;
    // char ele = '1';
    // for(int i=0;i<s.length()-1;i++){
    //     int x=s[i];
    //     if(s[i+1]==x){
    //         a++;
    //         if(mc<a){
    //             ele = s[i-1];
    //         }
    //         mc = max(a,mc);
    //     }
    //     else{
    //         a =1;
    //     }
    // }
    // cout<<ele<<" is "<<mc<< " times";

    //another approach
    string s = "daanceerrr";
    vector<int>v(26);
    for(int i=0;i<s.length();i++){
        v[((int)s[i])-97]++;
    }
    int max = -1;
    int maxidx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max = v[i];
            maxidx=i;
        }
    }

    cout<<(char)(maxidx+97)<<" occurs maximum times which is = "<<max;
}