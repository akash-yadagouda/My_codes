#include<bits/stdc++.h>
using namespace std;

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


int ceil(vector<int> vec, int low , int high, int x)
{
    

    int mid;
    int temp1=high;

    while (1){

        if(low==high)
        {
            cout<<"loop broke\n";
            return -1;

        }


      

    if(vec[low] >= x)
    {
        return 0;
    }

    if(vec[high]<x)
    {
        return -1;
    }



    mid = (low+high)/2;


    if(vec[mid] == x)
    {
        return mid;
    }

    if(vec[mid]<x)
    {
        if(mid+1 <= high && x <= vec[mid+1])
        {
            return mid+1;
        }

        low = mid + 1;

    }
    else if(vec[mid]>x)
    {
        if( (mid-1 >= low)  &&  (x > vec[mid-1]) )
        {   
            return mid;
        }
        high = mid-1;
    }


    }
    






    

}

int ceil(vector<int> vec, int low , int high, int x)
{
    

    int mid;
    int temp1=high;

    while (1){

        if(low==high)
        {
            cout<<"loop broke\n";
            return -1;

        }


      

    if(vec[low] > x)
    {
        return -1;
    }

    if(vec[high]<=x)
    {
        return high;
    }



    mid = (low+high)/2;


    if(vec[mid] == x)
    {
        return mid;
    }

    if(vec[mid]<x)
    {
        if(mid+1 <= high && x <= vec[mid+1])
        {
            return mid+1;
        }

        low = mid + 1;

    }
    else if(vec[mid]>x)
    {
        if( (mid-1 >= low)  &&  (x > vec[mid-1]) )
        {   
            return mid;
        }
        high = mid-1;
    }


    }
    






    

}

int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};  
    vector<int> a(arr,arr+7);
    vector_display(a,a.size());
    int n = a.size();
    int x = 11; 
    cin>>x; 
    int index = ceil(a, 0, n-1, x);  
    if(index == -1)  
        cout << "Ceiling of " << x  
             << " doesn't exist in array ";  
    else
        cout << "ceiling of " << x  
             << " is " << arr[index];  
      
    return 0;

 
    
}