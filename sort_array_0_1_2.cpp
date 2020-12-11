#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{ 
    cout<<"\n____diaplay started____\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n____display end____\n";
}


void dutch_3_flag_problem(int arr[],int n)
{
    int low=0,mid=0,high=n-1;
    int i=0;

    while(mid<=high)
    {
        if(arr[i]==0)
        {
            
            arr[i]=arr[low];
            arr[low] = 0;
            
            low++;
            mid++;
            i++;
        }
        else if(arr[i]==1)
        {
            mid++;
            i++;

        }
        else
        {
            arr[i]=arr[high];
            arr[high] = 2;
            high--;
            
        }
        

    }
}

void sort012(int a[], int n)
{
    int zeros=0;
    int ones=0;
    int twos=0;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            zeros++;
        }
        else if(a[i]==1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
   // cout<<zeros<<" "<<ones<<" "<<twos<<endl;
    int i = 0;
    
    for(;i<zeros;i++)
    {
       a[i] = 0; 
        
    }
     while(ones)
    {
      a[i]=1;
      i++;
      ones--;
    }
     while(twos)
    {
       a[i] = 2;
       i++;
       twos--;
        
    }
    
}


int main()
{

    int arr[] = {0,1,1,0,2,2,0,1};
    int n = 8;
   // sort012(arr,n);
    dutch_3_flag_problem(arr,n);
    display(arr,n);

    return 0;
    
}