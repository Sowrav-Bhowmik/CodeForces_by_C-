#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  k, n;
    cin >> n >> k;

    for(int i=0; i<k; i++){
        int last_digit = n % 10;
        if(last_digit==0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }
    cout << n << endl;
    return 0;
}
