/*Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a integer: ";
    getline(cin,s);
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<s.length();i++){
        int arrayI = (int)(s[i]) - 48;
        if(arrayI>max){
            smax = max;
            max = arrayI;
        }
        else if(arrayI>smax&&arrayI<max){
            smax = arrayI;
        }

    }
    if(smax == INT_MIN){
        cout<<"NO secondmax element present";
    }
    else{
        cout<<smax;
    }
}