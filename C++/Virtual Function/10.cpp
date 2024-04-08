#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual void play() = 0;
    virtual void tune() = 0;
};
class Glockenspiel : public Instrument
{
public:
    void play() override
    {
        cout << "Glockenspiel Plays" << endl;
    }
    void tune() override
    {
        cout << "Glockenspiel Tunes" << endl;
    }
};
class Violin : public Instrument
{
public:
    void play() override
    {
        cout << "Violin Plays" << endl;
    }
    void tune() override
    {
        cout << "Violin Tunes" << endl;
    }
};
int main()
{
    Instrument *ptr1;
    Glockenspiel glockenspiel;
    Violin violin;
    ptr1 = &glockenspiel;
    ptr1->play();
    ptr1->tune();
    ptr1 = &violin;
    ptr1->play();
    ptr1->tune();
    return 0;
}