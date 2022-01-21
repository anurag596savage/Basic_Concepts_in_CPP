#include <iostream>
using namespace std;
#include <climits>

int Second_Largest(int* arr,int n)
{
    int high = INT_MIN;
    int second_high = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>high)
        {
            second_high = high;
            high = arr[i];
        }
        else if(arr[i]>second_high && arr[i]!=high)
        {
            second_high = arr[i];
        }
    }
    return second_high;
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
        int ans = Second_Largest(arr,n);
        cout<<ans<<endl;
    }

    return 0;
}
