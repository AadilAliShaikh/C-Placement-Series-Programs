#include<iostream>
using namespace std;
int main()
{
    int n,Rs100,Rs50,Rs20,Rs1;
    cout<<"ENTER THE AMOUNT:"<<endl;
    cin>>n;
    switch (1)
    {
    case 1 :
        Rs100 = n/100;
        n = n%100;
        cout<<"NUMBER OF Rs.100 NOTES:"<<Rs100<<endl;


    case 2 :
        Rs50 = n/50;
        n = n%50;
        cout<<"NUMBER OF Rs.50 NOTES:"<<Rs50<<endl;
        

    case 3 :
        Rs20 = n/20;
        n = n%20;
        cout<<"NUMBER OF Rs.20 NOTES:"<<Rs20<<endl;
        

    case 4 :
        Rs1 = n/1;
        n = n%1;
        cout<<"NUMBER OF Rs.1 NOTES:"<<Rs1<<endl;
        
    
    }
    return 0;
}