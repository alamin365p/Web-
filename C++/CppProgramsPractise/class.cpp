#include<iostream>
#include<list>
#include<string>
using namespace std;
class Family
{
    public:
    string Parvez;
    string ParvinAkter;
    string AbdulHai;
    int FamilyMember;
    list<string>SistersName;
};
int main()
{
    Family fmd;
    fmd.Parvez = "Student";
    fmd.ParvinAkter = "Mom";
    fmd.AbdulHai = "Dad";
    fmd.FamilyMember = 7;
    fmd.SistersName = {"Piju", "Tahamina", "She"};

    cout<<"Parvez: "<<fmd.Parvez<<endl;
    cout<<"ParvinAkter: "<<fmd.ParvinAkter<<endl;
    cout<<"AbdulHai: "<<fmd.AbdulHai<<endl;
    cout<<"FamilyMember: "<<fmd.FamilyMember<<endl;
    cout<<"Sisters: "<<endl;
    for (string Sisters: fmd.SistersName)
    {
        cout<<Sisters<<endl;
    }


    return 0;
}





#include<iostream>
#include<list>
using namespace std;


class FavoriteSongs
{
    public:
    list<string>FavoriteSongAndMusicList;

};

int main()
{
    FavoriteSongs FSML;
    FSML.FavoriteSongAndMusicList = {"Faded", "Lost control", "Dark", " hunny", "Money", "Tum hi ho"};

    cout<<" Song and Music List of My Favorite: "<<endl;
    for(string FavoriteAll: FSML.FavoriteSongAndMusicList)
    {
        cout<<FavoriteAll<<endl;
    }


    return 0;

}




