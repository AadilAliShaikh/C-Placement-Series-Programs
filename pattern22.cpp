#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
         int j = 1;
         int k = i-1;
         while (k)
         {
            cout<<"  ";
            k--;
         }
         while (j<=n-i+1)
         {
            cout<<" "<<i;
            j++;
         }
         cout<<endl;
         i++;
         
         
    }
    
    return 0;
}