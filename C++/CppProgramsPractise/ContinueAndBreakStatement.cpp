#include<iostream>

using namespace std;


int main()
{

    for(int Date=1; Date<30; Date++)
    {
        //int pocketmoney=300;
        
        if(Date%2==0)
        {
            continue;
        }
        cout<<"Go out today"<<endl;
    }


    return 0;
}