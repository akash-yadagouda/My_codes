#include<bits/stdc++.h>
#include "template.h"

void rotate(int arr[],int n)
{
    int temp; 
    temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

}

int main()
{
    int arr[]={1,2,3,4,5};

    array_display(arr,5);
    rotate(arr,5);
    array_display(arr,5);
}