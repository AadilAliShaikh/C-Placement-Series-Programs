#include<iostream>
using namespace std;
int main()
{
    int i=1,n,rem,temp=0;
    cout<<"ENTER THE NUMBER :"<<endl;
    cin>>n;
    while (i<=n)
    {
        rem=n%i;
        if(rem == 0){
            temp++;
        }
        i++;
    }
    if (temp==2)
    {
        cout<<"ENTERED NUMBER IS PRIME NUMBER"<<endl;
    }
    else
    {
        cout<<"ENTERED NUMBER IS NOT PRIME NUMBER"<<endl;
    }
    
    return 0;
}