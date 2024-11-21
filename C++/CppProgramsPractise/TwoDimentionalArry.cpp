// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[3][4];
//     a[0][0]=23;
//     cout<<"(0,0) : "<<" "<<a[0][0]<<endl;
//     a[0][1]=56;
//     cout<<"(0,1) : "<<" "<<a[0][1]<<endl;
//     a[0][2]=66;
//     cout<<"(0,2) : "<<" "<<a[0][2]<<endl;
//     a[0][3]=5;
//     cout<<"(0,3) : "<<" "<<a[0][3]<<endl;
//     a[1][0]=99;
//     cout<<"(0,1) : "<<" "<<a[0][1]<<endl;

//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n>>m;
    
//     int mat[n][m]; //Two Dimensional Array

//     for(int i=0; i<n; i++) // inner loop to take row in Matrix or 2d array
//     {
//         for(int j=0; j<m; j++) // inner loop to take row in Matrix or 2d array
//         {
//             cin>>mat[i][j];
//         }
//     }

//     for(int i=0; i<n; i++) // inner loop to Print row in Matrix or 2d array
//     {
//         for(int j=0; j<m; j++) // inner loop to Print row in Matrix or 2d array
//         {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl; // do next line after print every row
//     }

//     return 0;
// }





// #include<iostream>
// #include<stdio.h>
// using namespace std;
// int main()
// {
//     int a[3][4];
//     int cnt=1;


//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             a[i][j]=cnt;
//             cnt++;
//         }
//     }


//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cout<<"("<<i<<" "<<j<<")"<<a[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
    
// }





// #include<iostream>
// #include<stdio.h>
// using namespace std;

// const int mx = 123;
// int a[mx][mx];

// int main()
// {
//     int n,m;
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
//             cout<<"("<<i<<" "<<j<<")"<<" "<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }






#include<iostream>
#include<stdio.h>
using namespace std;

const int mx = 123;
int a[mx][mx];

int main()
{
    int n,m;
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
            a[i][j]++;
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"("<<i<<" "<<j<<")"<<" "<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
