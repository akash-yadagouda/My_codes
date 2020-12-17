#include<bits/stdc++.h>
#include "template.h"
using namespace std;

void sort_element_by_frequency(vector<int> vec, int n)
{
    sort(vec.begin(),vec.end(),greater<int>());

    unordered_map<int, int> ans;

    for(int i=0;i<n;i++)
    {
        ans[vec[i]]++;
    }

   // dict_display(ans);

   vector<pair<int,int> > a = unordered_map_sort(ans,"value");

  
    

    for(auto i : a)
    {
        for(int j=0;j<i.second;j++)
        cout<<i.first<<" ";
    }
    
}



int main()
{

    vector<int> a = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8};
    sort_element_by_frequency(a,a.size());

  

    
}