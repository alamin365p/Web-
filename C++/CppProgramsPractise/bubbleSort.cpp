#include<iostream>
using namespace std;
int main()
{
    int n, i, arr[50], j, temp;

    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "===============================\n";
    for (i = 0; i < n; i++)
    {
        cout << "Element(" << i<<") : ";
        cin >> arr[i];
    }

    cout<<endl<<"Sorting the Array using Bubble Sort Technique.."<<endl;
    cout << "===============================\n";
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<endl<<"Array Sorted Successfully!"<<endl;
    cout<<endl<<"The New Array is:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}
