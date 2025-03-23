
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, count=0;
    int arr[]={5,4,3,2,1};
    cin >> n;

    for(int i=0; i<5; i++){
        count+=n/arr[i];
        n=n%arr[i];
    }

    cout << count <<endl;
    return 0;
}
