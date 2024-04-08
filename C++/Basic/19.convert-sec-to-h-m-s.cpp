#include <iostream>
using namespace std;
int main()
{
    int sec, h, m, s;
    cout << "Enter the time in seconds : ";
    cin >> sec;
    h = sec / 3600;
    m = (sec - h * 3600) / 60;
    s = (sec - h * 3600 - m * 60);
    cout << "Time -> " << h << "h : " << m << "m : " << s << "s " << endl;
    return 0;
}