// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int target) {
//     int left = 0;
//     int right = size - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         // Check if the target is present at the middle
//         if (arr[mid] == target)
//             return mid;

//         // If the target is greater, ignore the left half
//         if (arr[mid] < target)
//             left = mid + 1;

//         // If the target is smaller, ignore the right half
//         else
//             right = mid - 1;
//     }

//     // If the target is not present in the array
//     return -1;
// }

// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 10;

//     int result = binarySearch(arr, size, target);

//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found in the array" << endl;

//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main()
// {
//     int len, i, arr[50], num, j, temp, first=0, last, middle;

//     cout << "Enter the size of the array : ";
//     cin >> len;
//     cout << "===============================\n";
//     for (i = 0; i < len; i++)
//     {
//         cout << "Element(" << i<<") : ";
//         cin >> arr[i];
//     }

//     // sort the array first
//     for(i=0; i<(len-1); i++)
//     {
//         for(j=0; j<(len-i-1); j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     // print the sorted array
//     cout<<endl<<"The New Sorted Array is:\n";
//     for(i=0; i<len; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     // now back to binary search
//     cout<<endl<<endl<<"Enter Element to be Search: ";
//     cin>>num;

//     last = (len-1);
//     middle = (first+last)/2;
//     while(first <= last)
//     {
//         if(arr[middle]<num)
//         {
//             first = middle+1;
//         }
//         else if(arr[middle]==num)
//         {
//             cout<<endl<<"The number, "<<num<<" found at Position "<<middle+1;
//             break;
//         }
//         else
//         {
//             last = middle-1;
//             middle = (first+last)/2;
//         }
//     }
//     if(first>last)
//         cout<<"\nThe number, "<<num<<" is not found in given Array"<<endl;
//     return 0;
// }





// #include<iostream>
// using namespace std;


// int BinarySearch(int arr[], int n, int key){


//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return - 1;


//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }

// int main(){
//     cout<<"Enter Number N:"<<endl;

//     int n;
//     cin>>n;
//     cout<<"Enter Elements of n:"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter Any Key to Search:"<<endl;
//     cin>>key;

//     cout<<BinarySearch(arr,n,key)<<endl;

//     return 0;

// }



 
  



// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int n, int key){
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return - 1;

//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     cout<<"Enter Array Size N:"<<endl;

//     int n;
//     cin>>n;
//     cout<<"Enter Elements of n:"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter Any Key to Search:"<<endl;
//     cin>>key;

//     cout<<BinarySearch(arr,n,key)<<endl;

//     return 0;

// }











// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[], int n, int key){
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return - 1;

//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     cout<<"Enter Array Size N:"<<endl;

//     int n;
//     cin>>n;
//     cout<<"Enter Elements of n:"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter Any Key to Search:"<<endl;
//     cin>>key;
//     cout<<"The Result is:"<<endl;
//     cout<<BinarySearch(arr,n,key)<<endl;

//     return 0;

// }










// #include<iostream>
// using namespace std;
// int BS(int arr[], int n, int key)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==key)
//         {
//             return i;
//         }
//     }
//     int s=0;
//     int e=n;
//     while(s<=e)
//     {
//         int mid=(s+e)/2;
//         if(arr[mid]==key)
//         {
//             return arr[mid];
//         }
//         else if(arr[mid]>key)
//         {
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }

//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the Length of Arr n:"<<endl;
//     cin>>n;
//     cout<<"Enter the arguments of Arr n:"<<endl;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter Key to Find out Position"<<endl;
//     cin>>key;
//     cout<<"The key is in:"<<endl;
//     cout<<BS(arr, n, key)<<endl;
//     return 0;
// }


