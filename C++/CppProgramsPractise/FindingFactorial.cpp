#include <iostream>
using namespace std;
class con1
{
    int n,i,fact=1;
    public:
    con1();
    void display();
};
con1:: con1()
{
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
 }
        void con1 :: display()
        {
        cout<<"Factorial is :"<<fact;
        }
int main()
 {
     con1 c;
     c.display();
     return 0;
 }
            






