#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    cout<<"\ndisplay started \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ndisplay end\n";
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void get_ans(int arr[],int left, int right)
{
    while(left<right){
    // if both elements are positive
    if(arr[left]>0 && arr[right]>0)
    {
        right--;
    }
    else if(arr[right]<0 && arr[left]<0)
    {
        left++;
    }
    else
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    }
    


}


int main()
{
    int arr[] ={-12, 11, -13, -5, 6, -7, 5, -3, -6};

    int n = sizeof(arr)/sizeof(arr[0]);

    get_ans(arr,0,n-1);

    display(arr,n);




}