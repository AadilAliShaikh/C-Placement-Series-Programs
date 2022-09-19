#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    char a = 'A';
    int k = 0;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    while (i<=n)
    {
        int l=  a + k;
        k++;
        int j = 1;
        while (j<=i)
        {
            cout<<" "<<(char)l<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    return 0;
}