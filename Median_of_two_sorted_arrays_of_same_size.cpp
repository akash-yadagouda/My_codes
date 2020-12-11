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

void get_ans(vector<int> A, vector<int> B, int n1)
{
    int m1;
    int m2;

    m1 = -1;
    m2 = -1;

    int i=0;
    int j=0;

    for(int ii=0;ii<=n1;ii++)
    {

        if(i==n1)
        {
            m1 = m2;
            m2 = B[0];
            break;



        }
        else if(j==n1)
        {
            m1 = m2;
            m2 = A[0];
            break;

        }
        else
        {
            if(A[i]<=B[j])
            {              
                m1 = m2;
                m2 = A[i];
                i++;
            }
            else
            {
               
                m1 = m2;
                m2 = B[j];
                j++;
            }
            
        }

      
        

        

    }

    // cout<<m1<<" "<<m2;
      cout<<((m1+m2)/2);

}

int main()
{

    vector<int> a = {1, 12, 15, 26, 38};
    vector<int> b = {2, 13, 17, 30, 45};

    get_ans(a,b,a.size());



  

    
}