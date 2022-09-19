#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    int i=1,k=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<" "<<k<<" ";
            j++;
        }
        cout<<endl;
        i++;
        k++;
        
        
    }
    

    return 0;
}