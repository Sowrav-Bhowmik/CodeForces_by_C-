#include<iostream>
#include<cstdio>
#include<list>
using namespace std;

int main()
{
    int i=0, n;
    string ch;
    string str1="X++", str2="++X", str3="--X", str4="X--";
    cin >> n;
    int x=0;
    while(i<n)
    {

        cin >> ch;

        if(ch==str1)
        {
            x++;
        }
        else if(ch==str2)
        {
            ++x;
        }
        else if(ch==str4)
        {
            x--;
        }
        else if(ch==str3)
        {
            --x;
        }

        i++;

    }

    cout << x << endl;

    return 0;
}