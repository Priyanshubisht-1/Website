#include <iostream>
using namespace std;
class student
{
    float sum = 0;
    float total = 0;
    float per;
    float cgpa;
    class subject
    {
        float marks_sub;
        float total_sub;
        friend class student;
    };

public:
    void get(int a)
    {
        subject s[a];
        for (int i = 1; i <= a; i++)
        {
            cout << "\nEnter the marks obtained in " << i << " subject : ";
            cin >> s[i].marks_sub;
            cout << "Enter the total marks in " << i << " subject : ";
            cin >> s[i].total_sub;

            sum = sum + s[i].marks_sub;
            total = total + s[i].total_sub;
        }
        per = ((sum / total) * 100);
        cgpa = (per / 9.5);
    }
    void display()
    {
        cout << "\nPercentage of student : " << per << "%" << endl;
        cout << "CGPA of student : " << cgpa << endl;
    }
};
int main()
{
    student sourav;
    int x;
    cout << "Enter the total subjects : ";
    cin >> x;
    sourav.get(x);
    sourav.display();
    return 0;
}