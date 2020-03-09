#include <iostream>
#include <string>

#include "User.h"
#include "Playlist.h"
#include "Artist.h"
#include "Song.h"
#include "Administrator.h"

using namespace std;

int main()
{

    Song s1("Darude Sandstorm",324,"Unknown","Very nice genre");    /// Creating Song s1
    Song s2("big dick song",432,"doesnt matter really","Ayo mayo"); /// Creating Song s2
    User u1("Rafal Wolk");  /// Creating User u1
    Artist a1("Sebbyby");   /// Creating Artist a1
    a1.publishSong(&s1);    /// Adding Song s1 to the Artist class vector
    a1.publishSong(&s2);    /// Adding Song s2 to the Artist class vector
    a1.displayUser();
    a1.listSongs(); /// Displaying the Artist vector of Songs

    s1.displayDetailed();   /// Displaying the Song object s1
    u1.playSong(&s1);
    u1.rateSong(&s1,4.3);
    s1.displayDetailed();
    Playlist p1("y is it 2020");

    p1.addSong(s1);
    p1.addSong(s2);
    p1.displayPlaylist();

    Administrator admin1;   /// Creating an Admin
    admin1.deleteUser(&u1); /// Deleting a User using Adimn class



    return 0;
}
