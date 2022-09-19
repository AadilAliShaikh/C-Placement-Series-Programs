#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int k = i-1;
         while (k)
         {
            cout<<"  ";
            k--;
         }

        int j = i;
        while (j<=n)
        {
            cout<<" "<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}