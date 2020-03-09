#ifndef SONG_H
#define SONG_H
#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <math.h>


using namespace std;
class Song
{
    public:
        Song(); /// Song Constructor
        Song(string,int);   /// Overloaded Song Constructor
        Song(string,int,string);    /// Overloaded Song Constructor
        Song(string,int,string,string); /// Overloaded Song Constructor
        virtual ~Song();    /// Destructors

        int Getduration() { return duration; }  /// Duration of the song Getter function

        string Getgenre() { return genre; } /// Genre of the song Getter function
        void Setgenre(string val) { genre = val; }  /// Genre of the song Setter function

        string getArtName() { return artName; } /// Artist Name of the song Getter function
        void setArtName(string val) { artName = val; }  /// Artist Name of the song Setter function

        string Getname() { return name; }   /// User Name Getter function
        void Setname(string val) { name = val; }    /// User Name Setter function

        float GetRating();
        int GetNoRatings();

        void Play();    /// Play Song Function
        bool Rate(float);   /// Get Song Rating Function
        string formTime();  /// Format the time to mm:ss
        void display(); /// Display basic Song info Function
        void displayDetailed(); /// Display detailed Song info Function

    protected:

    private:
        const int duration = 0; /// Constant duration of the song
        int timesPlayed = 0;    /// amount of times a song was played
        vector<float> ratings;  /// Vector of ratings
        string genre;   /// Song Genre
        string name;    /// Song Name
        string artName; /// Name of the Artist




};

#endif // SONG_
