#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Song.h"
#include <iostream>
#include <vector>
#include <string>


class Playlist
{
    public:

        void addSong(Song);
        void spacer();
        void displayPlaylist();

        Playlist();
        Playlist(string);
        virtual ~Playlist();

        string GetplaylistName();
        void SetplaylistName(string val);

    protected:
    private:
        string playlistName;
        vector<Song> playlistVector;
};

#endif // PLAYLIST_H
