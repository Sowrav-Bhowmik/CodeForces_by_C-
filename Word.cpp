#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int upper=0, lower=0;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            upper++;
        }
        else if(islower(s[i])){
            lower++;
        }
    }
    if(upper>lower){
        transform(s.begin(),s.end(),s.begin(),[](unsigned char c){ return toupper(c);});
        cout << s << endl;
    }
    else{
         transform(s.begin(),s.end(),s.begin(),[](unsigned char c){ return tolower(c);});
        cout << s << endl;
    }

    return 0;
}