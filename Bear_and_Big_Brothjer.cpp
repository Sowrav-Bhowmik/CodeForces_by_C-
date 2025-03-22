#include<iostream>
using namespace std;

int main()
{
    int wL, wB, count=0;

    cin >> wL >> wB;

    while(true){

        if(wL<=wB){
                wL=3*wL;
                wB=2*wB;
               count++;

        }

        if(wL>wB){
            break;
        }
    }

    cout << count << endl;


    return 0;
}