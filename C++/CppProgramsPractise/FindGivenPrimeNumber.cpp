#include<iostream>

using namespace std;

class Isprime
{
    private:
    int numb;
    public:
void getNumber()
{
    int numb;
    cout<<"Enter number:";
    cin>>numb;
}
void ey()
{
    int index, cheak=0;
    for(index=2; index<numb; index++)
    {
        if(numb% index == 0)
        {
            cout<<numb<<"Number is not prime"<<endl;
            cheak++;
            break;
        }
    }
    if(cheak=0)
        {
        cout<<numb<<"Is prime"<<endl;
    }
}
};
int main()
{
    Isprime p;
    p.getNumber();
    p.ey();
    return 0;
}
