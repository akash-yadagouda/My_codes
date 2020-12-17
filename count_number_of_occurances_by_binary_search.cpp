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


int count_occurances(vector<int> vec, int n, int x)
{
    int mid;
    int first;
    int last;

    first = 0;
    last = n-1;

    if(vec[first]==x)
    {
        return first;
    }
    else if(vec[last] == x)
    {
        return last;
    }
    
    while(first<=last)
    {  cout<<"hi\n";
        mid = (first+last)/2;

        if(vec[mid] >= x)
        {
            last = mid-1;
        }
        else if(vec[mid]<x)
        {
            first = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    cout<<"element not found \n";
    return -1;

    

}


int count(vector<int> vec, int n)
{
    int left;
    int right;
    int center;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        center = count_occurances(vec,n,vec[i]);
        left = center;
        right = center-1;

        while(left<n)
        {
            if(vec[left]==vec[i])
            {
                count++;
                left++;
            }
            else
            {
                break;
            }
            
        }
        while(right>=0)
        {
            if(vec[i] == vec[right])
            {
                count++;
            }
            else
            {
                break;
            }
            
        }

        cout<<"\n"<<vec[i]<<" : "<<count<<endl;
        count=0;
        
    }


}

int main()
{

    vector<int> a ={ 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    vector_display(a,a.size());
    count(a,a.size());

  

    
}