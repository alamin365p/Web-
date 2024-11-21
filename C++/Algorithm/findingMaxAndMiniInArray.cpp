// #include<iostream>
// using namespace std;


// int main()
// {
//     int num[100];
//     int n, i, max;
//     cout<<"Enter Array Size: "<<endl;
//     cin>>n;
    
//     for(i=0; i<n; i++)
//     {
//         cin>>num[i];
//     }

//     max=num[0];

//     for(i=1; i<n; i++)
//     {
//         if(max<num[i])
//         max=num[i];
//     }
//     cout<<"The Meximum Vallue is:"<<max<<endl;


// return 0;

// }


#include<iostream>
using namespace std;


int main()
{
    int num[100];
    int n, i, mini;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    
    for(i=0; i<n; i++)
    {
        cin>>num[i];
    }

    mini=num[0];

    for(i=1; i<n; i++)
    {
        if(mini>num[i])
       mini=num[i];
    }
    cout<<"The Meximum Vallue is:"<<mini<<endl;


return 0;

}
