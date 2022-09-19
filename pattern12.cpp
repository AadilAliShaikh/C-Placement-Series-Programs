#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        char a = 'A';
        int j =1;
        while (j<=n)
        {
            int k=a+j-1;
            cout<<" "<<(char)k<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    return 0;
}