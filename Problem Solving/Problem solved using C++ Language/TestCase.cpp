

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