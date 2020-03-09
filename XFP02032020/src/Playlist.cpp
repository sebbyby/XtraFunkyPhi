#include "Playlist.h"

Playlist::Playlist()    /// Playlist Constructor
{
    playlistName = "Playlist";
}

Playlist::Playlist(string n)    /// Playlist Constructor
{
    playlistName = n;
}

Playlist::~Playlist()   /// Playlist Destructor
{
    //dtor
}

void Playlist::addSong(Song s)  /// Adding Song Object into a playlist vector function
{
    playlistVector.push_back(s);
}

void Playlist::spacer() /// Function creating spacing between functions
{
    int x = 100;    /// Length of the characters printed
    char index = '-';   /// Selected character to print
    cout << endl ;  /// End line
    for (int i = 0; i < x; i++){cout << index;}     /// For loop to print out the selected character for a selected length
    cout << endl << endl;   /// End line twice
}

void Playlist::SetplaylistName(string val) { playlistName = val; }  /// Setter function for Playlist Name

string Playlist::GetplaylistName() { return playlistName; } /// Getter function for Playlist Name

void Playlist::displayPlaylist()    /// Display function for all song objects in the playlist
{
    spacer();   /// Calling the spacer function
    cout << playlistName << ":" << endl;
    for (int i = 0; i < playlistVector.size(); i++)
    {
        playlistVector.at(i).display();
    }
    spacer();   /// Calling the spacer function
}
