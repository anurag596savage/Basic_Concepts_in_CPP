#include <iostream>
using namespace std;

int Check_Rotation(int* arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return i+1;
        }
    }
    return 0;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<Check_Rotation(arr,n)<<endl;
    }

    return 0;
}
