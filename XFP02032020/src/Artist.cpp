#include "Artist.h"


Artist::Artist()
{
    User::UserName = "Artist username";
}

Artist::~Artist()
{
    //dtor
}

Artist::Artist(string n,Song &s)
{
    User::UserName = "n";
    Artist::songVectorPtr = &s;
}

/**void Artist::addArtistSong(Song)
{
    artistVector.push_back(Song());
}**/

void Artist::spacer()
{
    int x = 100;
    char index = '-';
    cout << endl ;
    for (int i = 0; i < x; i++){cout << index;}
    cout << endl << endl;
}

void Artist::displayArtist()
{
    spacer();
    cout << "Artists Username => " << GetUserName() << endl << "Artists Number Of Songs => " << GetnoOfSongs() << endl;
    spacer();
}
