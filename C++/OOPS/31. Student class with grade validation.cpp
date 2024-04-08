#include <iostream>
#include <string>

using namespace std;

class Stud
{
private:
    int sid;
    string snam;
    char grad[10];
    int ngrd;

public:
    Stud()
    {
        ngrd = 0;
    }

    void ssid(int id)
    {
        sid = id;
    }

    void ssnm(string name)
    {
        snam = name;
    }

    void agrd(char grade)
    {
        if (ngrd < 10)
        {
            if (grade >= 'A' && grade <= 'F')
            {
                grad[ngrd++] = grade;
            }
            else
            {
                cout << "Grade " << grade << " is Invalid(Grade must be between 'A' and 'F')" << endl;
            }
        }
        else
        {
            cout << "Grades limit reached. Cannot add more grades." << endl;
        }
    }

    int gsid()
    {
        return sid;
    }

    string gsnm()
    {
        return snam;
    }

    char *ggrd()
    {
        return grad;
    }

    int gngrd()
    {
        return ngrd;
    }
};

int main()
{
    Stud stdt;
    stdt.ssid(11);
    stdt.ssnm("Priyanshu");

    stdt.agrd('A');
    stdt.agrd('B');
    stdt.agrd('G');
    stdt.agrd('D');

    cout << "Student ID: " << stdt.gsid() << endl;
    cout << "Student Name: " << stdt.gsnm() << endl;
    cout << "Grades: ";
    char *grades = stdt.ggrd();

    for (int i = 0; i < stdt.gngrd(); i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;

    return 0;
}
