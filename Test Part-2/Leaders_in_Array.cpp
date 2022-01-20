#include <iostream>
using namespace std;

void Leaders_in_Array(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = true;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag || i==n-1)
        {
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Leaders_in_Array(arr,n);

    return 0;
}
