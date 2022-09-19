#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    char a='A';
    while (i<n)
    {
        int j=1;
        while (j<=n)
        {
            int k = a+i+j-1;
            cout<<" "<<(char)k<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    return 0;
}