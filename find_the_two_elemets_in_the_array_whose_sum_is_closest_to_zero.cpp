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


int get_ans(vector<int> A, int n)
{
    int left=0,right=n-1;

    sort(A.begin(),A.end());

    vector_display(A,A.size());

    int sum = 0;
    int absum = 0;
    int ans =  abs(A[left] + A[right]);

    while (left<right)
    { cout<<"1\n";
        cout<<A[left]<<" "<<A[right]<<endl;
        sum = A[left] + A[right];
        cout<<sum<<"\n";
        absum = abs(sum);

        
        if(absum<ans)
        {
            ans = absum;
        }
        if(sum<0)
        {
            left++;

        }
        else if(sum>0)
        {
            right--;
        }
        
        
            
        
        
    }

   // cout<<A[left]<<" "<<A[right];
   

    cout<<"\n "<<ans<<endl;
    


}




  int main()  
{  
    vector<int> arr = {1, 60, -10, 70, -80, 85};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    get_ans(arr, arr.size());  
    return 0;  
}  

    
