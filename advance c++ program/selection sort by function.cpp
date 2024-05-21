#include<iostream>
using namespace std;
void sortedarray(int arr[],int size)
{
    int i,j,minindex;
    for(i=0;i<size;i++)
    {
        minindex=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[minindex]>arr[j])
                minindex=j;
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    cout<<"Sorted array is :"<<endl;
    for(int z=0;z<size;z++)
        cout<<arr[z];
}

int main()
{
    int n;

    cout<<"Enter the size of the array \n";
    cin>>n;
     int arr[n];
    cout<<"Enter the elements in array \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sortedarray(arr,n);

}
