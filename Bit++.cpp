#include<string.h>
#include<iostream>
#include<cstdio>
#include<list>
using namespace std;

int main()
{
    int i=0, n;
    string ch;
    cin >> n;
    int x=0;
    while(i<n)
    {

        cin >> ch;

        if(ch[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }

        i++;

    }

    cout << x << endl;

    return 0;
}
