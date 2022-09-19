#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENT "<<endl;
    cin>>n;
    int a = 0,b = 1;
    cout<<" "<<b<<" ";
    for (int i = 1; i <= n;i++)
    {
        int c = a + b;
        cout<<" "<<c<<" ";
        a = b;
        b = c;

        
    }
    
    return 0;
}