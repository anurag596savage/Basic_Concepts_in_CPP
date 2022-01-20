#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

void Min_Length_Word(char input[],char output[])
{
    int n = strlen(input);
    int start=-1;
    int mini = INT_MAX;
    int count=0;

    for(int i=0;i<=n;i++)
    {

        if(input[i]!=' ' && i!=n)
        {
            count++;
        }

        else if(mini>count || (i==n && mini>count))
        {
            mini = count;
            start=i-mini;
            count = 0;
        }

        else
        {
            count = 0;
        }
    }
    for(int i=0;i<mini;i++)
    {
        output[i] = input[i+start];
    }
}

int main()
{
    char input[1000];
    cin.getline(input,1000);
    char output[1000];
  
    Min_Length_Word(input,output);
  
    cout<<output<<endl;
    cout<<endl;
  
    return 0;
}
