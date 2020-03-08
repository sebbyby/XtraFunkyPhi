#include <iostream>
#include <string>
#include <forward_list>

#include "User.h"
#include "Playlist.h"
#include "Artist.h"
#include "Listener.h"
#include "Song.h"

using namespace std;

int main()
{

    Song s1("Darude Sandstorm",324,"Sebus","Very nice genre");
    Song s2("big dick song",432,"Sebus","Ayo mayo");
    User u1("Rafal Wolk");
    Artist a1("Sebbyby");
    a1.createSong(s1);
    a1.createSong(s2);
    a1.listSongs();



    return 0;
}
