#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class MusicLibrary
{
private:
    static const int MAX_SONGS = 100;
    string songs[MAX_SONGS];
    int numSongs;

public:
    MusicLibrary()
    {
        numSongs = 0;
    }
    void addSong(const string &song)
    {
        if (numSongs < MAX_SONGS)
        {
            songs[numSongs++] = song;
        }
        else
        {
            cout << "Library is full. Cannot add more songs." << endl;
        }
    }

    void removeSong(const string &song)
    {
        for (int i = 0; i < numSongs; ++i)
        {
            if (songs[i] == song)
            {
                for (int j = i; j < numSongs - 1; ++j)
                {
                    songs[j] = songs[j + 1];
                }
                numSongs--;
                break;
            }
        }
    }

    void playRandomSong()
    {
        if (numSongs == 0)
        {
            cout << "No songs in the library." << endl;
            return;
        }
        int x = time(0);
        srand(x);
        int index = rand() % numSongs;
        cout << "Playing: " << songs[index] << endl;
    }
};

int main()
{
    MusicLibrary library;
    library.addSong("Song 1");
    library.addSong("Song 2");
    library.addSong("Song 3");
    library.addSong("Song 4");
    library.addSong("Song 5");
    library.addSong("Song 6");
    library.playRandomSong();
    library.removeSong("Song 2");
    library.playRandomSong();
    return 0;
}