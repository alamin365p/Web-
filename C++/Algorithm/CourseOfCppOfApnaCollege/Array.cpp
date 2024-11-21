
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin>>n;
//     int parvej[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>parvej[i];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         cout<<parvej[i]<<" ";
//     }


//     return 0;
// }











// #include<iostream>k
// using namespace std;

// int main()
// {
//     char fuad, woafi;
//     int parvezFndAge[4];
//     parvezFndAge[0]=fuad;
//     parvezFndAge[1]=woafi;


//     return 0;
// }








// #include<iostream>
// using namespace std;

// int main()
// {
//     int SubScor[3]={93, 89, 68};
//     cout<<SubScor[1]<<endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int parvez[n];
//     for(int i=0; i<=n; i++)
//     {
//         cin>>parvez[i];
//     }

//     for(int i=0; i<=n; i++)
//     {
//         cout<<parvez[i]<<endl;
//     }
//     return 0;
// }







#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0; i<n; i++)
    {
        // if(arr[i]>maxNo)
        // {
        //     maxNo=arr[i];
        // }
        // if(arr[i]<minNo);
        // {
        //     minNo=arr[i];
        // }

        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo, arr[i]);
    }

    cout<<"Maximum No. is: "<<maxNo<<endl;
    cout<<"Minimum No. is: "<<minNo<<endl;

    return 0;
}