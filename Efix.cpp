#include <iostream>
// Isaiah Perez
// Fix to Emily's code
// 11/01/2026
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

class Course {
public:
    string courseName;
    //missing semicolon after class definition
    void displayCourse() {
        cout << "Course: " << courseName << endl;
    }
};

int main() {
    Student s;
    s.name = "Emily";

    Course c;
    c.courseName = "Programming";

    s.display();
    //Missing semicolon after displayCourse() function call
    c.displayCourse();

    return 0;
}
