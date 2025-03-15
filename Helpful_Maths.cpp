#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    int temp;
    long long int i, j;
    cin >> s;
        for(i=0; i<s.size();i++){
            for(j=0; j<i; j++){
                if(s[i]<s[j] && s[i]!='+' && s[j]!='+'){
                    temp=s[j];
                    s[j]=s[i];
                    s[i]=temp;
                }
            }
        }
    cout << s << endl;

    return 0;
}