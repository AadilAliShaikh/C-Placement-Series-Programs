#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int j = i;
        int k = 1;
        while (j<=n)
        {
            cout<<" "<<k;
            k++;
            j++;
        }

        int l = i -1;
        while (l)
        {
            cout<<" * *";
            l--;
        }
        
        int m = i;
        while (m<=n)
        {
            cout<<" "<<m;
            m++;
        }
        
        i++;
        cout<<endl;
    }
    
    return 0;
}