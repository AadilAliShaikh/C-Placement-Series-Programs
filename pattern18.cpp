#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    char a='A';
    while (i<=n)
    {
        int j = 1;
        int k = a+n-i;
        while (j<=i)
        {
            cout<<" "<<(char)k<<" ";
            k = k+1;
            j++;

        }
        i++;
        cout<<endl;
        
    }
    
    return 0;
}