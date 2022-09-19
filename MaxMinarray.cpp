#include<iostream>
#include<limits.h>
using namespace std;
void input(int arr[],int size)
{
    cout<<"Taking input for array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Done with taking input"<<endl;

}
void print(int arr[], int size)
{
    cout<<"Printing elements of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int getmin(int arr[],int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
        
    }

    return min;
    
}

int getmax(int arr[],int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }

    return max;
}

int sum(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        
    }

    return sum;
}
int main()
{
    int arr[100];
    int size;
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>size;
    input(arr,size);
    print(arr,size);
    int ans1 = getmax(arr,size);
    int ans2 = getmin(arr,size);
    int ans3 = sum(arr,size);

    cout<<"MAXIMUM VALUE: "<<ans1<<endl<<"MINIMUM VALUE: "<<ans2<<endl;
    cout<<"SUM OF ALL VALUES OF ARRAY: "<<ans3<<endl;


    return 0;
}