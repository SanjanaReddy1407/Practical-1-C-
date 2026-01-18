//24006040_sanjanareddy_practicle-1-b
#include <iostream>
using namespace std;
class Course {
private:
    string coursename;
    int totalstudents, coursecode, credits;

public:
    void input() {
        cout << "Enter Course Name: ";
        cin >> coursename;
        cout << "Enter Course Code: ";
        cin >> coursecode;
        cout << "Enter Credits: ";
        cin >> credits;
        cout << "Enter Total Enrolled Students: ";
        cin >> totalstudents;
    }

    void output() {
        cout << "Course: " << coursename <<endl;
        cout << "Code:" << coursecode << endl;
        cout << "Credits: " << credits <<endl;
        cout << "Enrollment: " << totalstudents << endl;
    }

    
    int gettotalstudents() {
        return totalstudents;
    }
    string getcoursename() {
        return coursename;
    }
};

int main() {
    Course c1, c2, c3;

    cout << "Enter Details of 3 Courses" << endl;
    cout <<"course 1 :-"<<endl;
    c1.input();
    cout <<"\ncourse 2:-"<<endl;
    c2.input();
    cout<<"\ncourse 3:-"<<endl;
    c3.input();
    
    cout << "\nCourse with Highest Enrollments" << endl;
    if (c1.gettotalstudents() > c2.gettotalstudents() && c1.gettotalstudents() > c3.gettotalstudents()) {
        c1.output();
    } 
    else if (c2.gettotalstudents() > c1.gettotalstudents() && c2.gettotalstudents() > c3.gettotalstudents()) {
        c2.output();
    } 
    else {
        c3.output();
    }
    return 0;
}
