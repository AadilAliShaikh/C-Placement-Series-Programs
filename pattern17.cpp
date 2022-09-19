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
        while (j<=i)
        {
            int k = a+i+j-2;
            cout<<" "<<(char)k<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    return 0;
}