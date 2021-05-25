#include <iostream>
using namespace std;

template<class T>
void insertionSort(T *arr, int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j >=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int size,i;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter "<<size<<" elements : ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nBefore sorting : \n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    insertionSort(arr,size);
    cout<<"\nAfter sorting in ascending order : \n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
