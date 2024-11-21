#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, MaxElement, MinElement;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "===============================\n";
    for (i = 0; i < n; i++)
    {
        cout << "Element(" << i<<") : ";
        cin >> arr[i];
    }

    MaxElement = arr[0]; // initial declare

    for (i = 0; i < n; i++)
    {
        if (MaxElement < arr[i])
        {
             MaxElement = arr[i];
        }
    }
    MinElement = arr[0]; // initial declare

    for (i = 0; i < n; i++)
    {
        if (MinElement > arr[i])
        {
            MinElement = arr[i];
        }
    }

    cout << "===============================\n";

    cout << "Largest element : " << MaxElement << endl;
    cout << "Smallest element : " << MinElement;
    return 0;
}