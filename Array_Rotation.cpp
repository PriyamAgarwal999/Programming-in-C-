/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void rotate(int arr[],int n,int k);
void rotate(int arr[],int n,int k)
{
    int i=0;
        for(i=k;i<n;i++){
        cout<<arr[i];
    }
    for(i=0;i<n-k-1;i++)
    {
     cout<<arr[i];   
    }
}
int main()
{
    int arr[10],n,i,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    rotate(arr,n,k);
    return 0;
}
