#include<iostream>
using namespace std;
int power()
{
    int a,b;
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin>>a;
    cout<<"ENTER THE VALUE OF B"<<endl;
    cin>>b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans*a;
    }
    return ans;
    
}
int main()
{
    int ans = power();
    cout<<"A RAISED TO POWER B IS: "<<ans<<endl;

     ans = power();
    cout<<"A RAISED TO POWER B IS: "<<ans<<endl;

     ans = power();
    cout<<"A RAISED TO POWER B IS: "<<ans<<endl;
    return 0;
}