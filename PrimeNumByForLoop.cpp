#include<iostream>
using namespace std;
int main()
{
    int n,j,k=0;
    cout<<"!! ENTER THE NUMBER YOU WANT TO CHECK WHETHER IT IS PRIME OR NOT !!"<<endl;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        j=n%i;
        if (j==0)
        {
            k++;
        }
        
    }

    if (k>0)
    {
        cout<<n<<" IS NOT A PRIME NUMBER";
    }

    if (k==0)
    {
        cout<<n<<" IS A PRIME NUMBER";
    }
    
    return 0;
}