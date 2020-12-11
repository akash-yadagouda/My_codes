#include<bits/stdc++.h>
using namespace std;

int get_ans(int arr[], int n)
{
    int k = 2;
    int total=1;

    for(int i=0;i<n;i++)
    {
        total +=k;

        total -= arr[i];
        k++;

    }

    return total;
}

int main()
{
    int arr[] = {2,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<get_ans(arr,n);

}