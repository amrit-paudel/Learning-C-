#include<iostream>
using namespace std;
void bubblesort (int arr[],int size);
int main()
{
    int n;
    cout<<"Enter the size of an array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements for array \n";
    for(int t=0;t<n;t++)
        cin>>arr[t];
    bubblesort(arr,n);
}
void bubblesort (int arr[],int size)
{
    int pass,i;
    for(pass=1;pass<=size-1;pass++)
    {
        int check=1;
        for(i=0;i<=size-1-pass;i++)
        {
            if(arr[i]>arr[i+1])
            {
                check=0;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }
         cout<<"round is "<<pass;
        if(check==1)
            return;

    }
    cout<<"The sorted array is \n";
    for(int i=0;i<size;i++)
        cout<<arr[i];
}

