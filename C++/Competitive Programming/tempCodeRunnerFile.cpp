#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, area, perimeter;
    cin>>a;
    cin>>b;
    area=a*b;
    perimeter=2*(a+b);
    cout<<area<<" "<<perimeter<<endl;
    return 0;
}
