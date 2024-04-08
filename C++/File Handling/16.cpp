#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    int rollno;
    string name;
    float marks;
    long long mobileNo;

public:
    Student() {
        rollno=0;
        name="";
        marks=0.0f;
        mobileNo=0;
    }
    Student(int r, const string& n, float m, long long mobile)
      {
        rollno=r;
        name=n;
        marks=m;
        mobileNo=mobile;
      }

    void readData() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter mobile number: ";
        cin >> mobileNo;
    }

    void displayData() const {
        cout << "Roll number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Mobile number: " << mobileNo << endl;
    }

    int getRollNo() const { return rollno; }
    string getName() const { return name; }
    float getMarks() const { return marks; }
    long long getMobileNo() const { return mobileNo; }
};

void displayMenu() {
    cout << "1. Insert Record\n";
    cout << "2. Delete Record\n";
    cout << "3. Update Record (based on rollno)\n";
    cout << "4. Search Record (based on rollno)\n";
    cout << "5. Clone the file\n";
    cout << "6. Exit\n";
}

void insertRecord(fstream& file) {
    Student student;
    student.readData();
    file.write(reinterpret_cast<char*>(&student), sizeof(Student));
    cout << "Record inserted successfully.\n";
}

void deleteRecord(fstream& file) {
    int rollno;
    cout << "Enter rollno to delete record: ";
    cin >> rollno;

    fstream tempFile("temp.bin", ios::out | ios::binary);
    Student student;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        if (student.getRollNo() != rollno) {
            tempFile.write(reinterpret_cast<char*>(&student), sizeof(Student));
        }
    }

    file.close();
    tempFile.close();
    remove("data.bin");
    rename("temp.bin", "data.bin");
    cout << "Record deleted successfully.\n";
}

void updateRecord(fstream& file) {
    int rollno;
    cout << "Enter rollno to update record: ";
    cin >> rollno;
    file.seekg(0,ios::beg);
    fstream tempFile("temp.bin", ios::out | ios::binary);
    Student student;
    bool found = false;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        if (student.getRollNo() == rollno) {
            student.readData();
            found = true;
        }
        tempFile.write(reinterpret_cast<char*>(&student), sizeof(Student));
    }

    file.close();
    tempFile.close();
    remove("data.bin");
    rename("temp.bin", "data.bin");
    if (found) {
        cout << "Record updated successfully.\n";
    } else {
        cout << "Record with rollno " << rollno << " not found.\n";
    }
}

void searchRecord(fstream& file) {
    int rollno;
    cout << "Enter rollno to search record: ";
    cin >> rollno;
    Student student;
    bool found = false;
    file.seekg(0,ios::beg);
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        if (student.getRollNo() == rollno) {
            found = true;
            student.displayData();
            break;
        }
    }

    if (!found) {
        cout << "Record with rollno " << rollno << " not found.\n";
    }
}

void cloneFile(fstream& file) {
    fstream cloneFile("clone.bin", ios::out | ios::binary);
    Student student;
    while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        cloneFile.write(reinterpret_cast<char*>(&student), sizeof(Student));
    }
    cloneFile.close();
    cout << "File cloned successfully.\n";
}

int main() {
    fstream file("data.bin", ios::in | ios::out | ios::binary);
    if (!file) {
        cerr << "Error opening file.\n";
        return 1;
    }

    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertRecord(file);
                break;
            case 2:
                deleteRecord(file);
                break;
            case 3:
                updateRecord(file);
                break;
            case 4:
                searchRecord(file);
                break;
            case 5:
                cloneFile(file);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 6);

    file.close();
    return 0;
}
