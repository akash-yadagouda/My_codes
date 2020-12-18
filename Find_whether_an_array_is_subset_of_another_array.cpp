//Find whether an array is subset of another array
#include<bits/stdc++.h>
#include "template.h"
using namespace std;

int get_ans(vector<int> A, vector<int> B)
{
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int i=0;
    int j=0;

    while(i<A.size() && j<B.size())
    {
        if(A[i]>B[j])
        {
            return 0;
        }
        else if(A[i]==B[j])
        {
            i++;
            j++;
        }
        else if(A[i]<B[j])
        {
            i++;
        }    
    }
    return j<B.size()?0:1;
   

   

}


int main()
{

    vector<int> a, b;
    int n;

    a = {11, 1, 13, 21, 3, 7};
    b = {11, 3, 7, 1} ;
    

    if(get_ans(a,b))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
    

}


