#ifndef ARTIST_H
#define ARTIST_H
#include "User.h"
#include "Song.h"
#include "Playlist.h"

class Artist : public User
{
    public:
        Artist(string n,Song &s);
        int noOfSongs;

        //vector<Song> artistVector;

        void displayArtist();
        void spacer();


        Artist();
        virtual ~Artist();

        int GetnoOfSongs() { return noOfSongs; }
        void SetnoOfSongs(int val) { noOfSongs = val; }

    protected:
    private:
        Song *songVectorPtr;


};

#endif // ARTIST_H
