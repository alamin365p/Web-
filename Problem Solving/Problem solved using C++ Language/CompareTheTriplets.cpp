// #include<iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[3];
//     for(int i=0; i<3; i++)
//     {
//         cin>>a[i];
//     }
//     int m;
//     int b[3];
//     cin>>m;
//     for(int j=0; j<3; j++)
//     {
//         cin>>b[j];
//     }
//     int a1, b1;
//     for(int i=0; i<3; i++)
//     {
//         if(a[i]>b[i])
//         {
//             a1++;
//         }
//         else if(a[i]<b[i])
//         {
//             b1++;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     cout<<a1<<" "<<b1;
//     return 0;
// }












#include <iostream>

using namespace std;

void compareTriplets(int a[], int b[], int result[]) {
    int alicePoints = 0, bobPoints = 0;

    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            ++alicePoints;
        } else if (a[i] < b[i]) {
            ++bobPoints;
        }
    }

    result[0] = alicePoints;
    result[1] = bobPoints;
}

int main() {
    int a[3], b[3];
    
    // Input values for Alice's ratings
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }

    // Input values for Bob's ratings
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    }

    int result[2];
    compareTriplets(a, b, result);

    // Print the result
    cout << result[0] << " " << result[1] << endl;

    return 0;
}