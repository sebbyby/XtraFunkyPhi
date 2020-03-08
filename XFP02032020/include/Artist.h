#ifndef ARTIST_H
#define ARTIST_H
#include "User.h"
#include "Song.h"
#include "Playlist.h"

class Artist : public User
{
    public:
        Artist(string n);
        int noOfSongs;

        //vector<Song> artistVector;

        void displayArtist();
        void spacer();
        void createSong(Song);


        Artist();
        virtual ~Artist();
        void listSongs();

        int GetnoOfSongs() { return noOfSongs; }
        void SetnoOfSongs(int val) { noOfSongs = val; }

    protected:
    private:
        vector <Song> songVector;



};

#endif // ARTIST_H
