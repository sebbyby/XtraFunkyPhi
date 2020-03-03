#include "Playlist.h"

Playlist::Playlist()
{
    playlistName = "Playlist";
}

Playlist::Playlist(string n)
{
    playlistName = n;
}

Playlist::~Playlist()
{
    //dtor
}

void Playlist::addSong(Song &s)
{
    playlistVector.push_back(&s);
}

void Playlist::spacer()
{
    int x = 100;
    char index = '-';
    cout << endl ;
    for (int i = 0; i < x; i++){cout << index;}
    cout << endl << endl;
}

void Playlist::SetplaylistName(string val) { playlistName = val; }

string Playlist::GetplaylistName() { return playlistName; }

void Playlist::displayPlaylist()
{
    spacer();
    for (int i = 0; i < playlistVector.size(); i++)
    {
        playlistVector.at(i)->display();
    }
    spacer();
}
