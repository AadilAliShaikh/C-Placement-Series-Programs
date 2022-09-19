#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the value of a" <<endl;
    cin >>a;
    cout << "Enter the value of b" <<endl;
    cin>>b;
    cout<<endl;
    if(a>b){
        cout<<"a is greater than b" <<endl;
    }
    else if(a<b){
        cout<<"a is less than b"<<endl;
    }
    else{
        cout<<"a is equals to b" <<endl;
    }
    return 0;
}