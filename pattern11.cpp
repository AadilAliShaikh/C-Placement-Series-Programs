#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    char a= 'A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            int c = a+i-1;
            cout<<" "<<(char)c<<" ";
            j++;
        }
        cout<<endl;
        i++;

        
    }
    

    return 0;
}