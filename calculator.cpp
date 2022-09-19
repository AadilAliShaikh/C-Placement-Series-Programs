#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF B"<<endl;
    cin>>b;
    cout<<"ENTER THE OPERATION(+,-,*,/,%)"<<endl;
    cin>>op;
    switch (op)
    {
    case '+' :
        cout<<a+b;
        break;
    
    case '-' :
        cout<<a-b;
        break;

    case '*' :
        cout<<a*b;
        break;

    case '/' :
        cout<<a/b;
        break;

    case '%' :
        cout<<a%b;
        break;

    default:
        cout<<"PLEASE ENTER CORRECT INFO";
        break;
    }
    return 0;
}