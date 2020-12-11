//Write a program to cyclically rotate an array by one.

#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> A, int n,int key);
void vector_display(vector<int> a,int n);
void display_array(int arr[], int n);


void rotate_arr(int arr[], int n)
{


    int temp;
    temp = arr[0];


    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    arr[n-1] = temp;

    
}




int main()
{

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display_array(arr,n);
    rotate_arr(arr,n);
    display_array(arr,n);
    
}


int binary_search(vector<int> A, int n,int key)
{

    sort(A.begin(),A.end());
    int mid= (0+n-1)/2;

    int first=0;
    int last=n-1;

    if(key==A[first])
    {
        return first;
    }
    if(key==A[last])
    {
        return last;
    }

    while(first<=last)
    {
        mid = (first+last) / 2;
        
        if(key>A[mid])
        {
         first = mid + 1;  
        }
        else if(key<A[mid])
        {
            last = mid-1;
            
        }
        else
        {
            return mid;
        }    
    }

    cout<<"\nKey does not exit in the array\n";

    return -1;



}


void vector_display(vector<int> a,int n)
{
    cout<<"\ndisplay started \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<"\ndisplay end\n";
}

void display_array(int arr[], int n)
{
    cout<<"\ndisplay started \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ndisplay end\n";
}
