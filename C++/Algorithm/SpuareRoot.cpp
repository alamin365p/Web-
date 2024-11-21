#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    bool isPerfectSquare = false;
    while(i*i<=n)
    {
        if(i*i==n)
        {
            cout<<"Perfect Square"<<endl;
            isPerfectSquare=true;
            break;
        }
        
        i++;
    }
        if(!isPerfectSquare)
        {
            cout<<"No Perfect Square"<<endl;
        }
    
    return 0;
}



