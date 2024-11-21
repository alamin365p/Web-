
#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int n, a;
    int sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}  