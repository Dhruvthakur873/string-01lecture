/*Given a sentence ‘str’, return the word that is lexicographically maximum.
Input : str = "proud to be pwians"
Output : pwians
Input : str = "decode dsa with pw"
Output : with*/
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s = "proud to be pwians";

    stringstream ss(s);
    string temp;
    string maxWord = "";
    while (ss >> temp) {
        if (temp > maxWord) {
            maxWord = temp;
        }
    }
    cout << maxWord;

    return 0;
}

