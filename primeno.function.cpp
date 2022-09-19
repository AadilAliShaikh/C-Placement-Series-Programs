#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            return 0;
        }
        
    } 
    return 1;
    
}

int main()
{
    int n;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    if (isPrime(n))
    {
        cout<<"IT IS A PRIME NUMBER"<<endl;
    }
    else
    {
        cout<<"IT IS NOT A PRIME NUMBER"<<endl;
    }
    
    return 0;
}