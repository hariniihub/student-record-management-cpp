// STUDENT MANAGEMENT SYSTEM
#include <iostream>
using namespace std;

#define SIZE 50

struct Student {
    int rno;
    char name[SIZE];
    int age;
    float marks;
};

int main() {
    Student s[50];
    int n, choice, search;
    bool found;

    cout << "Enter the number of students: ";
    cin >> n;

    // Input student details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i+1<< endl;
        cout << "Roll number: ";
        cin >> s[i].rno;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Age: ";
        cin >> s[i].age;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    do {
        cout << "\n--- STUDENT MANAGEMENT SYSTEM ---\n";
        cout << "1. Display all students\n";
        cout << "2. Search by roll number\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nDisplaying all student records:\n";
            for (int i = 0; i < n; i++) {
                cout << "\nROLL NO: " << s[i].rno;
                cout << "\nNAME   : " << s[i].name;
                cout << "\nAGE    : " << s[i].age;
                cout << "\nMARKS  : " << s[i].marks << endl;
            }
            break;

        case 2:
            cout << "Enter roll number to search: ";
            cin >> search;
            found = false;

            for (int i = 0; i < n; i++) {
                if (s[i].rno == search) {
                    cout << "\nStudent record found";
                    cout << "\nNAME   : " << s[i].name;
                    cout << "\nAGE    : " << s[i].age;
                    cout << "\nMARKS  : " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "\nStudent record not found!!\n";
            }
            break;

        case 0:
            cout << "\nExiting...\n";
            break;

        default:
            cout << "\nInvalid choice!!\n";
        }

    } while (choice != 0);

    return 0;
}

