#include<string.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int  p, v, t, count=0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){

        cin >> p >> v >> t;
        if(p+v+t >=2 ){
            count++;
        }

    }

    cout << count << endl;

    return 0;
}