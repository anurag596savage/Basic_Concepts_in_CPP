#include <bits/stdc++.h>
using namespace std;

void intersection_Sorted_Arrays(int* arr1,int size1,int* arr2,int size2)
{
    int i=0,j=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

void union_Sorted_Arrays(int arr1[],int size1,int arr2[],int size2)
{
    int i=0,j=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<size1)
    {
        cout<<arr1[i]<<" ";
        i++;
    }

    while(j<size2)
    {
        cout<<arr2[j]<<" ";
        j++;
    }

}

int main()

{
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    union_Sorted_Arrays(arr1,m,arr2,n);
    
    cout<<endl;

    intersection_Sorted_Arrays(arr1,m,arr2,n);

    cout<<endl;


    return 0;


}
