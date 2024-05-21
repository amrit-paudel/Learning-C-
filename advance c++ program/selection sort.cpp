#include<iostream>
using namespace std;
int size;

int main()
{
    int n;

    cout<<"Enter the size of the array \n";
    cin>>n;
     int arr[n];
    cout<<"Enter the elements in array \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

  int i,j,minindex;
    for(i=0;i<n;i++)//here we need not do compare at the end so we may do n-1 also
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {

            if(arr[minindex]>arr[j])
                minindex=j;
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }
    cout<<"The sorted array is \n";
    for(int z=0;z<n;z++)
        cout<<arr[z];
}
