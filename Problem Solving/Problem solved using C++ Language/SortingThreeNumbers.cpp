
// //Ascending Ordering three numbers

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin>>a>>b>>c;
//     int max, secmax, low;
//     if(a>b)
//     {
//         max=a;
//         secmax=b;
//     }
//     else
//     {
//         max=b;
//         secmax=a;
//     }
//     if(c>max)
//     {
//         low=secmax;
//         secmax=max;
//         max=c;
//     }
//     else if(c>secmax)
//     {
//         low=secmax;
//         secmax=c;
//     }
//     else
//     low=c;
//     cout<<low<<" "<<secmax<<" "<<max;
//     return 0;
// }











// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, s1, s2, s3;
//     cin>>a>>b>>c;
//     if(a<b && b<c)
//     {
//         s1=a;
//         s2=b;
//         s3=c;
//     }

//     else if(b<a && b<c)
//     {
//         s1=b;
//         s2=a;
//         s3=c;
//     }

//     else 
//     {
//         s1=c;
//         s2=a;
//         s3=b;
//     }
    
//     if(s3<s2)
//     {
//         int temp=s2;
//         s2=s3;
//         s3=temp;
//     }

//     cout<<s1<<" "<<s2<<" "<<s3;

//     return 0;
// }