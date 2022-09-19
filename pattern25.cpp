#include<iostream>
using namespace std;
int main()
{
    int n,i=1,l=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int k =n-i;
        while (k)
        {
            cout<<"  ";
            k--;
        }
        int j = 1;
        while (j<=i)
        {
            cout<<" "<<l;
            l++;
            j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}