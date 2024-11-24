 #include<iostream>
 using namespace std;

 int main()
 {
    int A, B, K;
    cin>>A>>B>>K;
    if(K<=A)
    {
        cout<<A-K<<B;
    }

    else if(A>K && K<(A+B))
    {
        B=(A+B)-K;
        cout<<"0"<<" "<<B;
    }
    else if(K>A+B)
    {
        cout<<"0" <<" "<<"0";
    }
    return 0;
 }
 
