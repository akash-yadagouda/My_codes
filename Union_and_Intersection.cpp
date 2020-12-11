#include <bits/stdc++.h>
using namespace std;


void two_pointer_approach(vector<int> A, vector<int> B, int m, int n)
{   int i=0,j=0;
    int ans=0;

    while (i<m && j<n)
    {
        if(A[i]>B[j])
        {
            //cout<<B[j]<<" ";
            j++;
            ans++;
        }
        else if(A[i]<B[j])
        {
           
           //cout<<A[i]<<" ";
           i++;
           ans++;
        }
        else
        {
           // cout<<A[i]<<" ";
            i++;
            j++;
            ans++;
        }   
    }

    if(i<m)
    {
        cout<<A[i]<<" ";
        ans++;
    }
    if(j<n)
    {
        cout<<B[j]<<" ";
        ans++;
    }


    cout<<"\nAns :"<<ans<<endl;
}

void vector_display(vector<int> a,int n)
{
    cout<<"\ndisplay started\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<"\ndisplay end\n";
}

void get_ans(vector<int> A, vector<int> B, int m, int n)
{  // cout<<"In fun\n";
   // cout<<m<<" "<<n<<endl;
    unordered_map<int,int> dict;
    
    for(int i=0;i<m;i++)
    {    //cout<<"1\n";
        dict[A[i]]++;
        
    }
    for(int i=0;i<n;i++)
    {   //cout<<"2\n";
        dict[B[i]]++;
    }

    cout<<dict.size()<<endl;
    
    /*for(auto i : dict)
    {   //cout<<"3\n";
        //cout<<i.first<<" ";
    }
    cout<<"\n";

    for(auto i : dict)
    {  // cout<<"4\n";
        if(i.second==2)
        {  //cout<<"5\n";
            cout<<i.first<<" ";
       }
    }*/

    
}



int main() {
	//code
	
	vector<int> A;
	vector<int> B;
	
	
	int test;
	int m;
	int n;
    int mm,nn;
	int temp;
    cin>>test;
	
	while(test--)
	{
	    cin>>m>>n;
        mm = m;
        nn = n;
	    
	    while(m--)
	    {
	        cin>>temp;
	        A.push_back(temp);
	        
	    }
	    while(n--)
	    {
	        cin>>temp;
	        B.push_back(temp);
	    }

       // vector_display(A,A.size());
        //vector_display(B,B.size());    
	   // get_ans(A,B,mm,nn);
       two_pointer_approach(A,B,mm,nn);
        A.clear();
        B.clear();
	    
	    
	    
	}
	
	
	return 0;
}