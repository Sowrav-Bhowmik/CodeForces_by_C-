#include<iostream>
#include<cstdio>
#include<list>
#include<cmath>
using namespace std;

int main()
{
    int n, k, i, count=0;

    cin >> n >> k;

    int arr[n];

    for(i=1; i<=n; i++){
        cin >> arr[i];
    }

    for(i=1; i<=n; i++){
        if(arr[i]>=arr[k] && arr[i]>0){
            count++;
        }
    }

    cout << count << endl;


    return 0;
}