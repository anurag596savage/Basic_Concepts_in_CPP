#include <iostream>
using namespace std;

void Push_Zeros(int* arr,int n)
{
    int non_Zero = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i] = arr[non_Zero];
            arr[non_Zero] = temp;
            non_Zero++;
        }
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
        Push_Zeros(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}
