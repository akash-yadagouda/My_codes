#include<bits/stdc++.h>
using namespace std;



void dict_display(unordered_map<int, int> dict)
{
    unordered_map<int, int>::iterator it;

    cout<<"\ndict display started\n";

    for(it=dict.begin();it!=dict.end();it++)
    {
        cout<<it->first<<"->"<<it->second<<endl;
    }


    cout<<"\ndict display ended\n";
}


bool comp_first(pair<int, int> a, pair<int, int> b)
{
    return a.first >b.first;
}
bool comp_second(pair<int, int> a, pair<int, int> b)
{
    return a.second >b.second;
}
vector<pair<int, int>> unordered_map_sort(unordered_map<int,int> &dict, string condition)
{
    vector<pair<int, int> > A;
    unordered_map<int, int>::iterator it;
    for(auto  &it : dict)
    {
        A.push_back(it);
    }
    if(condition == "key")
    sort(A.begin(), A.end(), comp_first);
    else if(condition == "value")
    sort(A.begin(), A.end(), comp_second);
    else
    {
        cout<<"mention condition \n";
        return A;
        
    }
   // cout<<"\ndisplay of sorted unordered map\n";
   // dict_display(dict);

    /*for(auto & i : A)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }
    cout<<"\n";*/

    return A;

}






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

void array_display(int arr[], int n)
{
    cout<<"\ndisplay started \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ndisplay end\n";
}