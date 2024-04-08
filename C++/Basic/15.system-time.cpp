#include <iostream>
// #include <ctime>
using namespace std;
int main()
{
    // time_t currentTime = time(nullptr);
    // cout << "Current Time : " << ctime(&currentTime) << endl;
    cout << "Current Time : " << __TIME__;
    return 0;
}