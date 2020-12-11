#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

void getmaxmin(int arr[], int n)
{
    struct Pair ans;

    if(n==1)
    {
        ans.min = arr[0];
        ans.max = arr[0];

        cout<<"Min: "<<ans.min<<" "<<"Max: "<<ans.max;
        return ;
    }
    else 
    {
        if(arr[0]>arr[1])
        {
            ans.min = arr[1];
            ans.max = arr[0];

            
           
        }
        else
        {
            ans.min = arr[0];
            ans.max = arr[1];
        }

        for(int i=2;i<n;i++)
        {
            if(arr[i]<ans.min)
            {
                ans.min = arr[i];
            }
            else if(arr[i]>ans.max)
            {
                ans.max = arr[i];
            }
        }
         cout<<"Min: "<<ans.min<<" "<<"Max: "<<ans.max;
         return;
        
    }
}

struct Pair getminmaxusingrecursion(int arr[], int start, int end)
{
    struct Pair ans,mml,mmr;
    if(start==end)
    {
        ans.min = arr[start];
        ans.max = arr[start];
        return ans;

    }
    else if(start == end - 1)
    {
        if(arr[start]<arr[end])
        {
            ans.min = arr[start];
            ans.max = arr[end];
        }
        else
        {
            ans.min = arr[end];
            ans.max = arr[start];
            
        }
        return ans;
        
    }
    int mid = ( start + end )/ 2;

    mml = getminmaxusingrecursion(arr,start,mid);
    mmr = getminmaxusingrecursion(arr,mid+1,end);

    if(mml.min <mmr.min)
    {
        ans.min = mml.min;
    }
    else
    {
        ans.min = mmr.min;
        
    }

    if(mmr.max<mml.max)
    {
        ans.max = mml.max;
    }
    else
    {
        ans.max = mmr.max;
    }

    return ans;
    
    

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    getmaxmin(arr,n);
    cout<<"\n";
    struct Pair ans = getminmaxusingrecursion(arr,0,6);
    cout<<"Min :"<<ans.min<<" Max:"<<ans.max<<endl;


    
}