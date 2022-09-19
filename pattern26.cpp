#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int k = n - i;
        while (k)
        {
            cout<<"  ";
            k--;
        }
        int j = 1;
        int l = 1;
        while (j<=i)
        {
            cout<<" "<<l;
            l++;
            j++;
        }

        int m=i-1;
        while(m)
        {
            cout<<" "<<m;
            m--;
        }
        
        i++;
        cout<<endl;
    }
    
    return 0;
}