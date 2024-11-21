#include <iostream>

using namespace std;

const float pi=3.14;
float vol(float l) //Cube Function Defination
{
    return l*l*l;
}
float vol(float r,float h) //Cylinder Function Defination
{
    return (pi*r*r*h);
}
float vol(float l,float b,float h) // Rectangle Function Defination
{
    return (l*b*h);
}


int main()
{
    float l,r,b,h,t;
    
    cout<<"\nEnter the Length of Cube: \n";
    cin>>l;
    t=vol(l);
    cout<<"\n\nVolume of Cube: "<<t;
    cout<<"\n\nEnter the Radius & Height of Cylinder: \n";
    cin>>r>>h;
    t=vol(r,h);
    cout<<"\n\nVolume of Cylinder: "<<t;
    cout<<"\n\nEnter the Length,Breadth & Height of Rectangle: \n";
    cin>>l>>b>>h;
    t=vol(l,b,h);
    cout<<"\n\nVolume of Rectangle: "<<t;
    
    return 0;
}
