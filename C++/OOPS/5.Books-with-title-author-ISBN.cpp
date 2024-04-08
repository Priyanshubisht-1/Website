#include <iostream>
using namespace std;

class Books
{
    string title;
    string author;
    long long int ISBN;

public:
    Books()
    {
        title = "Unknown";
        author = "Unknown";
        ISBN = 0;
    }
    void get()
    {
        cout << "\nEnter the Title of the Book : ";
        getline(cin, title);
        cout << "Enter the Author of Book : ";
        getline(cin, author);
        cout << "Enter the ISBN number of Book : ";
        cin >> ISBN;
    }
    void print()
    {
        cout << "\n<---- Book of ISBN number : " << ISBN << " ---->" << endl;
        cout << "Title of Book : " << title << endl;
        cout << "Author of Book : " << author << endl;
    }
    void remove()
    {
        this->~Books();
        cout << "Book removed Successfully" << endl;
    }
    static void add(Books o)
    {
        o.get();
        o.print();
    }
};

int main()
{
    int i = 0;
    Books b[100];
    char ch = 'y', del;
    while ((tolower(ch)) == 'y')
    {
        Books::add(b[i]);
        cout << "Do you want to add more ? (y - yes) : ";
        cin >> ch;
        cout << "Do you want to remove previous one ? (y - yes) : ";
        cin >> del;
        if (del == 'y')
            b[i].remove();
        cin.ignore();
        i++;
    }
    return 0;
}
