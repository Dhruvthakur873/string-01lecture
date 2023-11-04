// code for printing the word which occurs the maximum times  
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string temp;
    stringstream ss(str);
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxcount = -1;
    int count = 1;
    string maxword = "ansh";
    for(int i=0;i<v.size();i++){
        string poo = v[i];
        if(v[i+1]==poo){
            count++;
            if(count>maxcount){
                maxword = v[i]; 
            }
            maxcount = max(count,maxcount);
        }else{
            count = 1;
        }
    }
    cout<<maxword << " occured maximum times which is = "<<maxcount;
}