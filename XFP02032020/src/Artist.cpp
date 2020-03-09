#include "Artist.h"


Artist::Artist()    /// Artist Constructor
{
    User::UserName = "Artist username";
}

Artist::~Artist()   /// Artist Destructor
{
    //dtor
}

Artist::Artist(string n)    /// Overloaded Artist Constructor
{
    User::UserName = n;
}

Artist::Artist(string n,int nofs)    /// Overloaded Artist Constructor
{
    User::UserName = n;
    Artist::noOfSongs = nofs;
}

/**void Artist::addArtistSong(Song)
{
    artistVector.push_back(Song());
}**/

void Artist::publishSong(Song* s)   /// Add Song to a vector of songs function
{
    noOfSongs++;    /// Increment the number of songs for the artist
    s->setArtName(User::UserName);  /// Object pointer
    songVector.push_back(*s);   /// Adding Song Object into the vector
}

void Artist::listSongs()    /// Display Function for songVector
{
    for (int i=0;i<songVector.size();i++)
    {
        songVector.at(i).display();
    }
}

void Artist::spacer()   /// Function creating spacing between functions
{
    int x = 100;    /// Length of the characters printed
    char index = '-';   /// Selected character to print
    cout << endl ;  /// End line
    for (int i = 0; i < x; i++){cout << index;} /// For loop to print out the selected character for a selected length
    cout << endl << endl;   /// End line twice
}

void Artist::displayUser()    /// Display function
{
    spacer();   /// Calling the spacer function
    cout << "Artists Username => " << GetUserName() << endl << "Artists Number Of Songs => " << GetnoOfSongs() << endl; /// Getting & printing out the Artist with the number of songs
    spacer();   /// Calling the spacer function
}
