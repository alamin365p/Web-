#include<iostream>
using namespace std;

int main()
{
    int x, K;
    cin>>x;
    int Model=x%100;
    if(Model>=0 && Model<9)
    {
        cout<<"K"<<"0"<<Model<<endl;
    }
    else
    {
        cout<<"K"<<Model<<endl;
    }
    return 0;
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int x, K;
//     cin>>x;
//     int Model=x%100;
//     cout<<"K"<<Model<<endl;
//     return 0;
// }