#include<iostream>
using namespace std;
bool isEven(int num)
{
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int a;
    cout<<"ENTER THE VALUE OF A"<<endl;
    cin>>a;
    if (isEven(a))
    {
        cout<<"IT IS EVEN"<<endl;
    }
    else{
        cout<<"IT IS ODD"<<endl;
    }
    

    return 0;
}