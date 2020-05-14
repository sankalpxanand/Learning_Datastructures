#include<iostream>
using namespace std;
int main ()
{
    int i,n,j,arr[n],temp;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter the elemnts of array : "<<endl;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
    cout<<"The sorted array is :"<<endl;
    for (i=0;i<n;i++)
    {
            cout<<arr[i]<<endl;
    }
    return 0;
}
