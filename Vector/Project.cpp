#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class MemoryCalculate
{
private:
    T id;
    string name;

public:
    MemoryCalculate(T id, string name)
    {
        this->id = id;
        this->name = name;
    }

    void dispDetail()
    {
        cout << "Student ID: " << id << ", Name: " << name << endl;
    }

    T getid()
    {
        return id;
    }
};

template <typename T>
class StudentManager
{
private:
    vector<MemoryCalculate<T>> students;

public:
    // Add Student Function
    void addStudent(T id, string name)
    {
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getid() == id)
            {
                cout << "Student already exists..." << endl;
                return;
            }
        }

        students.push_back(MemoryCalculate<T>(id, name));
        cout << "Student added successfully..." << endl
             << endl;
    }

    // Display Student Function
    void getAllStudent()
    {
        if (students.empty())
        {
            cout << "No Student Data Exists..." << endl
                 << endl;
        }
        else
        {
            cout << "All Student Detail." << endl;
            for (int i = 0; i < students.size(); i++)
            {
                students[i].dispDetail();
            }
            cout << endl;
        }
    }

    // Search Student Function
    void searchStudent(T id)
    {
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getid() == id)
            {
                cout << "Student data found: " << endl;
                students[i].dispDetail();
                cout << endl;
                return;
            }
        }

        cout << "No Student Data Found!" << endl
             << endl;
    }

    // Remove Student Function
    void removeStudent(T id)
    {
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getid() == id)
            {
                students.erase(students.begin() + i);
                cout << "Student Data Deleted successfully..." << endl
                     << endl;
                return;
            }
        }

        cout << "No Student Data Found!" << endl
             << endl;
    }
};

void dispMenu()
{
    cout << "---------- Student Manager ----------" << endl
         << "1. Add Student Detail" << endl
         << "2. Get All Student Details" << endl
         << "3. Search Student Details by id" << endl
         << "4. Remove Student Details by id" << endl
         << "0. Exit" << endl
         << "Enter your choice: ";
}

int main()
{
    StudentManager<int> manager;
    int choice, id;
    string name;

    while (choice != 0)
    {
        dispMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter student id: ";
            cin >> id;
            cout << "Enter student name: ";
            cin >> name;
            manager.addStudent(id, name);
            break;
        case 2:
            manager.getAllStudent();
            break;
        case 3:
            cout << "Enter student id: ";
            cin >> id;
            manager.searchStudent(id);
            break;
        case 4:
            cout << "Enter student id: ";
            cin >> id;
            manager.removeStudent(id);
            break;
        case 0:
            cout << "Exiting Program...";
            break;
        default:
            cout << "Invalid Choice...";
            break;
        }
    }

    return 0;
}