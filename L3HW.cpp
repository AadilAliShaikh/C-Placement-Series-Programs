#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"ENTER A CHARACTER"<<endl;
    cin >> ch;
    if((int)ch>=48 && (int)ch<=57){
        cout<<"ENTERED CHARACTER IS NUMERIC"<<endl;;
    }
    if((int)ch>=65 && (int)ch<=90){
        cout<<"ENTERED CHARACTER IS UPPERCASE"<<endl;
    }
    if((int)ch>=97 && (int)ch<=122){
        cout<<"ENTERED CHARACTER IS LOWERCASE"<<endl;;
    }
    return 0;
}