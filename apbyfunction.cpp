#include<iostream>
using namespace std;
int ap(int n)
{
    int ans = (3*n) + 7;
    return ans;
}
int main()
{
    int n;
    cout<<"ENTER THE VALUE OF N"<<endl;
    cin>>n;
    int ans = ap(n);
    cout<<"THE "<<n<<"th TERM OF THE AP IS: "<<ans<<endl;
    return 0;
}