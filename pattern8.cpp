#include<iostream>
using namespace std;
int main()
{
    int n,i=1,k=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<" "<<k<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}