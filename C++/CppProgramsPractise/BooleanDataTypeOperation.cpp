
// #include<iostream>
// using namespace std;
// int main()
// {
//     bool name = false;
//     int age;
//     cout<<"Enter your age"<<endl;
//     cin>>age;
//     if(age>=18)
//     {
//         name=true;
//     }
//     if(name)
//     {
//         cout<<"You are fit"<<endl;
//     }
//     else
//     {
//         cout<<"You are no fit"<<endl;
//     }
//     return 0;
// }







// #include<iostream>
// using namespace std;
// int main()
// {
//     bool name = false;
//     int age;
//     cout<<"Enter your age"<<endl;
//     cin>>age;
//     if(age>=18)
//     {
//         name=true;
//     }
//     if(!name)
//     {
//         cout<<"You are fit"<<endl;
//     }
//     else
//     {
//         cout<<"You are no fit"<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;

// int main()
// {
//     bool p=false;
//     bool a=true;
//     cout<<"valude is: "<<p<<" "<<a<<endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main()
// {
//     int MxD=114;
//     int a[MxD][MxD];
//     int n, m;
//     cout<<"Please enter the length of Matrix"<<endl;
//     cin>>n>>m;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             cout<<"("<<i<<" "<<j<<")"<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int x;
//     cin>>x;
//     bool isExitsX = false;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             if(a[i][j]==x)
//             {
//                 isExitsX=true;
//                 break;
//             }
//         }
//         if(isExitsX) break;
//     }
//     if(isExitsX)
//     {
//         cout<<"Found";
//     }
//     else
//     {
//         cout<<"Not Found";
//     }
//     return 0;
// }








#include<iostream>
using namespace std;
int main()
{
    int MxD=114;
    int a[MxD][MxD];
    int n, m;
    cout<<"Please enter the length of Matrix"<<endl;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"("<<i<<" "<<j<<")"<<" "<<a[i][j]<<" "<<" ";
        }
        cout<<endl;
    }

    int x;
    cin>>x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==x)
            {
                cout<<i<<" "<<j<<endl;
            }
        }

    }

    return 0;
}



