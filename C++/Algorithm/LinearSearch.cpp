#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return - 1;
}


int main()
{
    int n;
    cout<<"Enter Arry Lenth n:"<<endl;
    cin>>n;
    cout<<"Enter Element's of n;"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter any Key to Search out:"<<endl;
    cin>>key;

cout<<LinearSearch(arr,n,key)<<endl;

    return 0;

}



// #include<iostream>
// using namespace std;

// int LinerSearch(int arr[], int n, int key){
//     for(int i=0; i<n; i++){
//         if(arr[i]=key){
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;


// cout<<LinerSearch(arr, n, key)<<endl;

//     return 0;
// }