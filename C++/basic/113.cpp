#include <iostream>
using namespace std;

class cmar {
    string* arguments;
    int count;

public:
   cmar(int argc, char* argv[]) {
        count = argc;
        arguments = new string[count];
        for (int i = 0; i < count; ++i) {
            arguments[i] = argv[i];
        }
    }

    void showArguments() {
        cout << "Command-line arguments:" << endl;
        for (int i = 1; i < count; ++i) {
            cout << "Argument " << i << ": " << arguments[i] << endl;
        }
    }
    ~cmar() {
        delete[] arguments;
    }
};

int main(int argc, char* argv[]) {
    cmar cmdArgs(argc, argv);
    cmdArgs.showArguments();
    return 0;
}
