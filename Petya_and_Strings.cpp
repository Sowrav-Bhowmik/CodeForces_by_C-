#include<iostream>
using namespace std;

int main()
{
    string str1, str2;

    while(cin >> str1 >> str2){

        long long int i=0;
    while(str1[i] != '\0'){
       if(str1[i]>='A' && str1[i]<='Z'){
        str1[i]=(str1[i]-'A')+97;
       }
       if(str2[i]>='A' && str2[i]<='Z'){
        str2[i]=(str2[i]-'A')+97;
       }

       i++;
    }

      long long int j=0;
    while(str2[j] != '\0'){
       if(str1[j]>str2[j]){
        cout << "1" <<endl;
        return 0;
       }
       if(str2[j]>str1[j]){
        cout << "-1" <<endl;
        return 0;
       }
       j++;
    }
    cout << "0" << endl;
    }

    return 0;
}