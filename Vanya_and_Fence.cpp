#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n], count=0;

    for(int i=0; i<n; i++){
        cin >> arr[i];

        if (arr[i]<=h){
            count+=1;
        }
        if(arr[i]>h){
            count+=2;
        }
    }
    cout << count << endl;

    return 0;
}