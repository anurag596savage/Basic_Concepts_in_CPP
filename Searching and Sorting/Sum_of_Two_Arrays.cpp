#include <iostream>
using namespace std;

void Sum_of_Two_Arrays(int* arr1,int size1,int* arr2,int size2,int* output)
{
    int i = size1-1;
    int j = size2-1;
    int k = max(size1,size2);
    int carry = 0;

    while(i>=0 && j>=0)
    {
        int sum = arr1[i]+arr2[j]+carry;
        output[k] = sum%10;
        carry = sum/10;

        i--;
        j--;
        k--;
    }
    while(i>=0)
    {
        int sum = arr1[i]+carry;
        output[k] = sum%10;
        carry = sum/10;

        i--;
        k--;
    }
    while(j>=0)
    {
        int sum = arr2[j]+carry;
        output[k] = sum%10;
        carry = sum/10;

        j--;
        k--;
    }

    output[0] = carry;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size1;
        cin>>size1;

        int arr1[size1];

        for(int i=0;i<size1;i++)
        {
            cin>>arr1[i];
        }

        int size2;
        cin>>size2;

        int arr2[size2];

        for(int i=0;i<size2;i++)
        {
            cin>>arr2[i];
        }

        int size3 = max(size1,size2)+1;
        int output[size3];

        Sum_of_Two_Arrays(arr1,size1,arr2,size2,output);

        for(int i=0;i<size3;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
