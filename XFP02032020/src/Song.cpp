#include "Song.h"

Song::Song() /// default ctor
{
    Song::name = "Sandstorm";
    Song::artName = "Darude";
    Song::genre = "Unspecified";
    //ctor
}
Song::Song(string n ,int d):duration(d) /// o/d'd ctor
{
    Song::name = n;
    Song::artName = "Unknown";
    Song::genre = "Unspecified";
    //ctor
}
Song::Song(string n ,int d , string aN):duration(d) /// o/d'd ctor++
{
    Song::name = n;
    Song::artName = aN;
    Song::genre = "Unspecified";
    //ctor
}

Song::Song(string n ,int d , string aN, string g):duration(d) /// o/d'd (ctor++)++
{
    Song::name = n;
    Song::artName = aN;
    Song::genre = g;
}

bool Song::Rate(float r)
{
    if (r>=0&&r<=5) /// if rating is in range 0-5
    {
        Song::ratings.push_back(r); /// add rating to list
        return true;
    }
    else /// otherwise display error
    {
        printf("Ratings in range 0-5\n");
        return false;
    }
}

int Song::GetNoRatings() /// show number of ratings
{
    return Song::ratings.size(); /// return ratings vector size
}

float Song::GetRating() /// get the song rating
{
    if (Song::ratings.size()==0) return 0; /// if the song hasnt been rated skip this
    float total = 0, vSize = Song::ratings.size(); /// initialise integers
    for (int i = 0;i<vSize;i++) /// for the entire vector
    {
        total += Song::ratings.at(i); /// add each rating to total
    }
    return total/vSize; /// return average rating
}

string Song::formTime() /// format time as mm:ss
{
    stringstream m; /// initialise string stream
    string z = ""; /// extra zero to be added if seconds < 10
    if (Song::duration%60 < 10) {z = "0";} /// if seconds < 10 add extra zero to keep nice format
    m << floor(Song::duration/60) /// get number of minutes
      << ":" << z
      << Song::duration%60; /// get remainder of seconds
    return m.str();
}

void Song::Play()
{
    Song::timesPlayed ++; ///increase counter
    cout << "Now playing: " << Song::artName << " - " << Song::name << endl; /// display song playing
}

void Song::display() /// basic info display
{
    string t = Song::formTime(); /// get song duration as mm:ss string
    cout << Song::artName << " - " << Song::name << " [" << t << "]\n"; /// cout info
}

void Song::displayDetailed() /// detailed info display
{
    string t = Song::formTime(); /// get song duration as mm:ss string
    float r = Song::GetRating();
    int rt = Song::GetNoRatings();
    cout << "Artist: " << Song::artName << "\nName: " << Song::name << "\nDuration: [" << t
         << "]\nTimes played: "<< Song::timesPlayed << "\nRated " << r << "/5 by "<< rt << " people\n" ; /// cout info
}

Song::~Song()   /// Song Destructor
{
    //dtor
}
