#include<iostream>
using namespace std;
int main()
{
    int n,i=1,k=0;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    char a = 'A';
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            int l = a+k;
            cout<<" "<<(char)l<<" ";
            k++;
            j++;
        }
        i++;
        cout<<endl;

    }
    
    return 0;
}