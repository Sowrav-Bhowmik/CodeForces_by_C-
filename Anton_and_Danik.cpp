#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int countA=0, countD=0;
    char c;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        if(c == 'A'){
            countA++;
        }
        else if(c == 'D'){
            countD++;
        }
    }
    if(countA>countD){
        cout << "Anton" << endl;
    }
    else if(countA<countD){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}