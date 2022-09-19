#include<iostream>
using namespace std;
int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans*i;
    }
    return ans;
    
}
int nCr(int n, int r)
{
    int ans = (fact(n))/((fact(n-r))*(fact(r)));
    return ans;
}
int main()
{
    int n,r;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    cout<<"ENTER THE VALUE OF R"<<endl;
    cin>>r;
    int ans = nCr(n,r);
    cout<<"nCr of the given info is: "<<ans<<endl;
    return 0;
}