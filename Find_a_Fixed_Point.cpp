#include<bits/stdc++.h>
#include "template.h"
using namespace std;


int find_a_fixed_point(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
        if(i==arr[i])
        {
            return i;
        }
        else if(i<arr[i])
        { 
            return -1;

        }
    }
}
int main()
{
    int arr[] = {0, 2, 5, 8, 17};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"ans:"<<find_a_fixed_point(arr,n);


}