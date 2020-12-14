#include<bits/stdc++.h>
using namespace std;

void vector_display(vector<int> a,int n)
{
    cout<<"\ndisplay started \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<"\ndisplay end\n";
}

void selection_sort(vector<int> a, int n)
{
    int min;

    for(int i=0;i<n-1;i++)
    {
        min = i;
        for(int j = i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        swap(a[i],a[min]);
    }

    vector_display(a,a.size());

    
}


int main()
{

}