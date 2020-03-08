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
        Song();
        Song(string,int);
        Song(string,int,string);
        Song(string,int,string,string);
        virtual ~Song();
        int Getduration() { return duration; }
        string Getgenre() { return genre; }
        void Setgenre(string val) { genre = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        float GetRating();
        int GetNoRatings();
        void Play();
        void Rate(float);
        string formTime();
        void display();
        void displayDetailed();

    protected:

    private:
        const int duration = 0;
        int timesPlayed;
        vector<float> ratings;
        string genre;
        string name;
        string artName;

};

#endif // SONG_
