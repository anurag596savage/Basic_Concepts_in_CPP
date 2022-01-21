#include <iostream>
using namespace std;

void Reverse(int* arr,int start,int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
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
        int d;
        cin>>d;
        if(d>=n && n!=0)
        {
            d = d%n;
        }
        if(n!=0)
        {
            Reverse(arr,0,n-1);
            Reverse(arr,0,n-d-1);
            Reverse(arr,n-d,n-1);
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
