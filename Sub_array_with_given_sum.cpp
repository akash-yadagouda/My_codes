/*#include<bits/stdc++.h>
using namespace std;

int get_ans(int arr[] , int n , int sum)
{
    int l = 0;
    int total = arr[0];
    int i= 1;
    while(1)
    {
        cout<<sum<<" "<<total<<endl;
        if(sum == total )
        {
            cout<<"got sum\n"<<"start :"<<l<<" end :"<<i<<endl;
            break;
        }
        else if(total < sum)
        {
                total = total + arr[i];     
                cout<<" "<<arr[i]<<" ";
                i++;
        }
        else if(total > sum )
        {
            total = total - arr[l];
            l++;//cout<<l<<" ";

        }
        else if (l > n)
        {
            cout<<"index out of bound \n";
        }
    }




}
int main()
{

    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23; 
    get_ans(arr, n, sum); 
    return 0; 

}
*/
#include<bits/stdc++.h>
using namespace std;

int get_ans(int arr[] , int n , int sum)
{
    int l = 0;
    int total = arr[0];
    int i= 1;
    while(1)
    {
        if(sum == total )
        {
            cout<<l+1<<" "<<i<<endl;
            break;
        }
        else if(total < sum)
        {
            if(i>=n)
            {
                cout<<"-1"<<endl;
                break;
            }
                total = total + arr[i]; 
                i++;    
        }
        else if(total > sum )
        {
            total = total - arr[l];
            l++;//cout<<l<<" ";

        }
        else if (l > n)
        {
           // cout<<"index out of bound \n";
           cout<<"-1"<<endl;
        }
    }




}
int main()
{
    int test;
    int N,S;
    int temp;
    cin>>test;
    
    while(test--)
    {
        cin>>N>>S;
        int arr[N];
        
        for(int i=0;i<N;i++)
        {
           cin>>temp;
           arr[i] = temp;
        }
        get_ans(arr,N,S);
        
    }
    

   

}