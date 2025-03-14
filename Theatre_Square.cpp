#include<iostream>
#include<cstdio>
#include<list>
#include<cmath>
using namespace std;

int main()
{
    long long int n, m, a, sq;

    cin >> n >> m >> a;

    sq=ceil((double)n/a)*ceil((double)m/a);

    cout << sq;

    return 0;
}