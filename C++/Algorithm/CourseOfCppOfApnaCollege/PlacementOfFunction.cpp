
//// Sum of Given First n natural numbers!!

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum;
//     cin>>n;
//     sum=(n*(n+1))/2;
//     cout<<sum<<endl;
//     return 0;
// }












//// Sum of Given First n natural numbers!!

// #include <bits/stdc++.h>
// using namespace std;

// int sum(int n)
// {
//     int ans = 0;
//     for(int i=1; i<=n; i++)
//     ans +=i;
//     return ans;
// }


// int32_t main()
// {
//     int n;
//     cin>>n;
//     cout << sum(n) <<endl;

// }















// Checking given numbers Pythagorian Triplet or Not!!

// #include <iostream>
// #include<stdio.h>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;

// bool check(int x, int y, int z)
// {
//     int a = max(x, max(y,z));
//     int b,c;
//     if (a==x)
//     {
//         b=y;
//         c=z;
//     }
//     else if(a==y)
//     {
//         b=x;
//         c=z;
//     }
//     else
//     {
//         b=x;
//         c=y;
//     }
//     if(a*a==b*b+c*c)
//     return true;
//     else
//     return false;
// }

// int32_t main()
// {
//     int x, y, z;
//     cin>>x>>y>>z;

//     if(check(x,y,z))
//     {
//         cout<<"Pythagorean triplet"<<endl;
//     }

//     else
//     {
//         cout<<"Not a Pythagorean Triplet"<<endl;
//     }



//     return 0;
// }















// #include<iostream>
// using namespace std;

// int main()
// {
//     int x,y,z;
//     cout<<"Input 3 integer numbers: "<<endl;
//     cin>>x>>y>>z;
//     int a = x*x;
//     int b = y*y;
//     int c = z+z;
//     int sum = b+c;
//     if (a==sum)
//     {
//         cout<<"Pythagorean triplet"<<endl;
//     }
//     else
//     {
//         cout<<"Not a Pythagorean Triplet"<<endl;
//     }

//     return 0;

// }














//// Normal calculator of Given 2 numbers!!
// #include<stdio.h>
// #include<algorithm>
// #include<iostream>
// using namespace std;
// int main()
// {
//     float a,b;
//     cout<<"Input any Two numbers: "<<endl;
//     cin>>a>>b;
//     cout<<"Enter any Operator: "<<endl;
//     char op;
//     cin>>op;
//     switch(op)
//     {
//         case '+':
//         cout<<a+b<<endl;
//         break;
//         case '-':
//         cout<<a-b<<endl;
//         break;
//         case '*':
//         cout<<a*b<<endl;
//         break;
//         case '/':
//         cout<<a/b<<endl;
//         break;
//         default:
//         cout<<"Enter another Operator"<<endl;
//         break;
//     }
//     return 0;
// }

