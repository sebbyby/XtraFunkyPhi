#ifndef ARTIST_H
#define ARTIST_H
#include "User.h"
#include "Song.h"
#include "Playlist.h"

class Artist : public User  /// Inheritance Relationship
{
    public:
        Artist(string n);   /// Overloaded Constructor
        Artist(string n,int nofs);   /// Overloaded Constructor
        int noOfSongs;      /// The number of songs artist have
        //vector<Song> artistVector;

        void displayUser();   /// Display function for the Artist
        void spacer();      /// Spacer function
        void publishSong(Song* s);  /// Add Song Function


        Artist();   /// Artist Constructor
        virtual ~Artist();  /// Artist Destructor
        void listSongs();   /// Display function for displaying the songVector

        int GetnoOfSongs() { return noOfSongs; }    /// Number of Songs Getter function
        void SetnoOfSongs(int val) { noOfSongs = val; } /// Number of Songs Setter function

    protected:
    private:
        vector <Song> songVector;  /// A vector of Song Objects



};

#endif // ARTIST_H
