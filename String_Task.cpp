#include<iostream>
#include<string.h>
#include<algorithm>
#include <bits/stdc++.h>
#include<cctype>
using namespace std;

int main()
{
    string s;
    int i=0;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
        return tolower(c);
    });
    while( i < s.length()){
        if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){

                cout << '.' << s[i];
        }
        i++;
    }
    return 0;
}
