#include<bits/stdc++.h>
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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

void display(int arr[], int n)
{
    cout<<"\ndisplay started \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ndisplay end\n";
}


void heapfipy(int arr[], int n, int i)
{
    int left;
    int right;
    int largest = i;

    left = 2*i + 1;
    right = 2*i + 2;

    if(arr[right]>arr[i] && right < n)
    {
        largest = right;
    }

    if(left<n && arr[largest]<arr[left])
    {
        largest = left;
        
    }
    

    if(largest!=i)
    {
        cout<<"\n"<<arr[largest]<<" "<<arr[i]<<endl;
        swap(arr[largest],arr[i]);
        heapfipy(arr,n,largest);

    }
}

void build_heap(int arr[], int n)
{
    int counter = (n/2) - 1;

    display(arr,n);


    for(int i=counter; i>=0 ; i--)
    {
        heapfipy(arr,n,i);
    }

    display(arr,n);



}

int main()
{

     int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 }; 

     int  n = sizeof(arr)/sizeof(arr[0]);

     build_heap(arr, n);


  

    
}