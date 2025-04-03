#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c=0, t=0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        t-=a;
        t+=b;
        c=max(c,t);

    }
    cout << c << endl;

    return 0;
}