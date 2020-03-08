#include "Artist.h"


Artist::Artist()
{
    User::UserName = "Artist username";
}

Artist::~Artist()
{
    //dtor
}

Artist::Artist(string n)
{
    User::UserName = "n";
}

/**void Artist::addArtistSong(Song)
{
    artistVector.push_back(Song());
}**/

void Artist::createSong(Song s)
{
    songVector.push_back(s);
}

void Artist::listSongs()
{
    for (int i=0;i<songVector.size();i++)
    {
        songVector.at(i).display();
    }
}

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
