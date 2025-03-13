#include<string.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n, s, count=0;
    cin >> n;
    char str[100];

    for(int a=0; a<n; a++){
        cin >> str;
        s = strlen(str);

        if(s<=10){
            cout << str << endl;
        }
        if(s>10){
          for(int a=1; a<s-1;a++){
            count++;
          }
          cout <<  str[0] << count << str[s-1] << endl;
        }
        count=0;
    }

    return 0;
}