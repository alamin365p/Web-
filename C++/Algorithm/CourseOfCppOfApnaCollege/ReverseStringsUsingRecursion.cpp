// #include<iostream>
// using namespace std;


// void reverse(string s)
// {
//     if(s.length()==0)
//     {
//         return; //base case
//     }

//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];

// }

// int main()
// {
//     reverse("binod");
//     return 0;
// }






// #include<iostream>
// using namespace std;

// void replacePi(string s)
// {
//     if (s.length()==0)
//     {
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i')
//     {
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }
//     else
//     {
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }
// }

// int main()
// {
//     replacePi("pippppiiiipi");
//     return 0;
// }





#include<iostream>
using namespace std;

string removeDeup(string s)
{
    if(s.length()==0)
    {
        return "";
    }

    char ch=s[0];
    string ans = removeDeup(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);

}


int main()
{
    cout<<removeDeup("aaaabbbeeecdddd")<<endl;
    return 0;
}