#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Song.h"
#include <iostream>
#include <vector>
#include <string>


class Playlist
{
    public:

        void addSong(Song); /// Adding Song Object into a playlist vector function
        void spacer();  /// Function creating spacing between functions
        void displayPlaylist(); /// Display function for all song objects in the playlist

        Playlist();    /// Playlist Constructor
        Playlist(string);   /// Overloaded Playlist Constructor
        virtual ~Playlist();    /// Playlist Destructor

        string GetplaylistName();   /// Getter function for Playlist Name
        void SetplaylistName(string val);   /// Setter function for Playlist Name

    protected:

    private:
        string playlistName;    /// Playlist name string
        vector<Song> playlistVector;    /// Playlist vector with Song objects
};

#endif // PLAYLIST_H
