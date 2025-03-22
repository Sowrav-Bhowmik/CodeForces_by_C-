#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;

    cin >> s;

    transform(s.begin(), s.begin() + 1, s.begin(), [](char c) {
        return toupper(c);
    });

    cout << s << endl;


    return 0;
}