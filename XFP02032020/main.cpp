#include <iostream>
#include <string>

#include "User.h"
#include "Playlist.h"
#include "Artist.h"
#include "Listener.h"
#include "Song.h"

/// -----------------------------------------------------
                # include "XtraFunky2.h"
/// -----------------------------------------------------
using namespace std;

int main()
{
    static const int maxUsers = 1000,
                     maxArtists = 1000,
                     maxSongs = 1000,
                     maxPlaylists = 1000;

    /* Cant use vector
    vector<User> userVector;
    vector<Artist> artistVector;
    vector<Playlist> playlistVector;
    vector<Song> songVector;
    */

    User *userArray[maxUsers];
    Artist *artistArray[maxArtists];
    Playlist *playlistArray[maxPlaylists];
    Song *songArray[maxSongs];

    int noUsers = 0,
        noArtists = 0,
        noPlaylists = 0,
        noSongs = 0;

    Song s1("Sandstorm",564,"Darude","Techno");

    //songVector.push_back(s1);


    User u1;
    u1.SetUserName("Rafcio");

    Artist a1;
    a1.SetUserName("Sebcio");
    a1.SetnoOfSongs(0);

    //Song s1("ASS",69,"HOLE");
    //s1.Setname("Sandstorm");
    //s1.Setgenre("Glitch Hop");
    //s1.Setduration(3.5);

    Playlist p1;

    int PPsize = 10;
    int smallPP [PPsize] = {0,5,3,1,3,4,2,1,4,2};

    //p1.addSong(songVector.at(0));
    //p1.addSong(s1);

    u1.displayUser();

    a1.displayArtist();

    p1.displayPlaylist();

    for (int i=0;i<PPsize;i++)
    {
        cout << smallPP[i] << ",";
    }
    cout << endl;

    expandArray(smallPP,10,12);

    smallPP[11] = 4;
    PPsize = 12;

    for (int i=0;i<PPsize;i++)
    {
        cout << smallPP[i] << ",";
    }
    cout << endl;



    return 0;
}
