#include <iostream>
using namespace std;

class Dog
{
    string Name;
    string Breed;
    static int r;

public:
    Dog();

    Dog(string n, string b)
    {
        Name = n;
        Breed = b;
    }

    void print()
    {
        r++;
        cout << "Name of " << r << " Dog   : " << Name << endl;
        cout << "Breed of " << r << " Dog  : " << Breed << endl;
    }
    void change_name(string na)
    {
        Name = na;
    }
    void change_breed(string br)
    {
        Breed = br;
    }
};

int Dog::r = 0;

int main()
{
    Dog d1("Kalu", "Indian Street Dog"), d2("Alex", "Labrador");
    d1.change_name("Sheru");
    d2.change_breed("German Shephard");
    d1.print();
    d2.print();
    return 0;
}