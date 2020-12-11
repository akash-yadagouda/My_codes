#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end = n-1;
    int temp=0;

    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;


    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }


}


void reverse_recursive(int arr[], int start, int end , int n)
{
    if(start>end)
    {
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return;
    }
    int temp = 0;

    temp = arr[start];

    arr[start] = arr[end];

    arr[end] = temp;


    reverse_recursive(arr,++start,--end,n);

}

int main()
{

    int arr[] = {1,2,3,4,5,6,7};

    cout<<"Normal method "; 
 //   reverse(arr,7);

    cout<<"\n recursive method "; 
    reverse_recursive(arr,0,6,7);








    
}