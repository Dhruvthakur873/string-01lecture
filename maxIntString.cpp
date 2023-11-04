#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>v = {"1324","5432","8765","2131"};
    int max = stoi(v[0]);
    for(int i=1;i<v.size();i++){
        if(stoi(v[i])>max){
            max =stoi(v[i]);
        }
    }
    cout<<max;
}