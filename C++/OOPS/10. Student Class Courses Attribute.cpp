#include <iostream>
#include <string>
using namespace std;
class course
{
    string cname;

public:
    void setc()
    {
        cin >> cname;
    }
    string proc()
    {
        return cname;
    }
};
class Student
{
    string name;
    char grade;
    course c[10];
    int cno;

public:
    Student()
    {
        cno = 0;
    }
    void get()
    {
        cout << "Name of the Student : ";
        cin >> name;
        cout << "Grade of the Student : ";
        cin >> grade;
    }
    void add()
    {
        cout << "Name of the Course : ";
        c[cno].setc();
        cno++;
    }
    int find(string ch)
    {
        for (int i = 0; i < cno; i++)
        {
            if (c[i].proc() == ch)
                return i;
        }
        return -1;
    }
    void remove(string ch)
    {
        int i = find(ch);
        if (i >= 0)
        {
            cout << ch << " Course Removed"<<endl;
            for (int j = i; j < cno; j++)
                c[j] = c[j + 1];
            cno--;
        }
        else
            cout << "Course Not Found"<<endl;
    }
};
int main()
{
    Student s1;
    char c = 'y';
    s1.get();
    s1.add();
    while (c == 'y')
    {
        cout << "Do you want to add more ? ";
        cin >> c;
        if (c == 'y')
            s1.add();
        else
            break;
    }
    c = 'y';
    while (c == 'y')
    {
        cout << "Do you want to remove course : ";
        cin >> c;
        if (c == 'y')
        {

            string ch;
            cout << "Enter the course name you want to remove : ";
            cin >> ch;
            s1.remove(ch);
        }
        else
            break;
    }
    return 0;
}