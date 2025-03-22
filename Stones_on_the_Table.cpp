#include<iostream>
using namespace std;

int main()
{
    int num, i, count=0;
    string s;
    cin >> num;
    cin >> s;

    for(i=0; i<num; i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }

    cout << count << endl;


    return 0;
}