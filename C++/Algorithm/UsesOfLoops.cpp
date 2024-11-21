// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=11;
//     do
//     {
//         cout<<i<<endl;
//        i++;
//     }
//     while (i<=10);
//     cout<<"After Loop i="<<" "<<i;
    
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int n=1;
//     do
//     {
//         if(n==5)
//         {
//             break;
//         }
//         cout<<n <<" ";
//         n++;
//     } while (n<=10);
    
//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a, b;
        cin>>a>>b;
        int sum=a+b;
        cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;
    }
    return 0;
}