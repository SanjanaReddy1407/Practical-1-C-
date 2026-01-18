# Practical-1__C++

# AIM
## Program to implement concept of class and object.

# Theory
1. Class: A Class is a user-defined data type that acts as a blueprint for creating objects. It encapsulates data (attributes) and methods (functions) into a single unit. In C++, classes are the core of Object-Oriented Programming (OOP).

2. Object: An Object is an instance of a class. When a class is defined, no memory is allocated; memory is only allocated when an object of that class is created.

3. Access Specifiers:

- Public: Members are accessible from outside the class.

- Private: Members can only be accessed by functions within the class. This is used for Data Hiding, a key part of encapsulation.

4. Member Functions: These are functions defined inside or outside the class that operate on the data members of the objects.

# Problem Statement 1
Design and implement a program to demonstrate the concept of Class
and Object by creating a Student class.
The class should contain data members such as roll number, student
name, and marks obtained.
Define member functions to accept student details and display them in a
formatted manner.
Create objects for at least five students and invoke the member
functions using these objects.

# Algorithm
step1: Start.

step2: Define a class stu with data members: rollno, name, and marks.

step3: Define input() function to read student details from the user.

step4: Define output() function to print the details in a tab-separated format.

step5: In main():

- Declare five objects: s1, s2, s3, s4, s5.

- Call input() for each object.

- Call output() for each object to display the results.

step6: Stop.

# CODE


#include <iostream>
using namespace std;
class stu{
    public:
    int rollno, marks;
    string name;
    
    void input(){
        cout<<"enter rollno. =";
        cin>>rollno;
        cout <<"enter name =";
        cin>>name;
        cout<<"enter marks =";
        cin>>marks;
        
    }
    
    void output(){
        cout<<"rollno. ="<<rollno<<"\t";
        cout<<" name ="<<name<<"\t";
        cout<<"  marks ="<<marks;
    }
};

int main () {
    stu s1, s2, s3, s4, s5;
    
    cout  << "entry of stu.1" << endl;
    s1.input();
    cout << "\nentry of stu.2" << endl;
    s2.input();
    cout << "\nentry of stu.3" << endl;
    s3.input();
    cout << "\nentry of stu.4" << endl;
    s4.input();
    cout << "\nentry of stu.5" << endl;
    s5.input();
    
    cout<<"\nstructured format"<<endl;
    cout<<"stuent 1 :-"<<endl;
    s1.output();
    cout<<"\nstudent 2 :-"<<endl;
    s2.output();
    cout<<"\nstudent 3 :-"<<endl;
    s3.output();
    cout<<"\nstudent 4 :-"<<endl;
    s4.output();
    cout<<"\nstudent 5 :-"<<endl;
    s5.output();
    
    return 0;
}

# Problem Statement 2
Design a Course class that represents an academic course.
The class should have private data members such as course name,
course code, number of credits, and total enrolled students.
Provide public member functions to input course details and compare
multiple course objects to identify the course with the highest
enrollment.
Use multiple objects of the class and display the comparison result.

# Algorithm
step1: Start.

step2: Define a class Course with private members: coursename, totalstudents, coursecode, and credits.

step3: Define public functions: input() to get data and gettotalstudents() to return the enrollment count (since the variable is private).

step4: In main():

- Create three course objects.

- Compare the totalstudents of each object using if-else logic.

- Identify the object with the maximum enrollment.

- Call the output() function of the winning object.

step5: Stop.

# CODE

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


# Problem Statement 3
Create a DataRecord class to represent a single row of a dataset
containing multiple numerical features (e.g., age, income, score).
The class should include methods to calculate the sum and average of
features for a record.
Create multiple objects representing different data records and compute
the overall feature-wise average across all objects.

# Algorithm

step1: Start.

step2: Define a class DataRecord with members: name, age, income, and score.

step3: Define getsum() to return (age + income + score).

step4: Define getaverage() to return the sum divided by 3.

step5: In main():

- Create five objects and take user input.

- Iterate through objects to display row-wise sum and average.

- Calculate the Column-wise average by summing a specific attribute (e.g., age) across all objects and dividing by 5.

step6: Stop.

# CODE

#include <iostream>
using namespace std;
class DataRecord {
public:
    string name;
    int age, income, score;
    
    void input(){
        cout<<"enter name :";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
        cout<<"enter income: ";
        cin>>income;
        cout<<"enter score: ";
        cin>>score;
    }
    int getsum() {
        return age + income + score;
    }
    double getaverage() {
        return (age + income + score) / 3;
    }
};

int main() {
    DataRecord r1, r2, r3, r4, r5;
    cout<<"enter row 1"<<endl;
    r1.input();
    cout<<"\nenter row 2"<<endl;
    r2.input();
    cout<<"\nenter row 3"<<endl;
    r3.input();
    cout<<"\nenter row 4"<<endl;
    r4.input();
    cout<<"\nenter row 5"<<endl;
    r5.input();
    
    //row (sum and average)
    cout << "\nrow-wise Statistics" << endl;
    cout << r1.name <<"\t"<< "Sum: " << r1.getsum() << "\t"<<"Avg: " << r1.getaverage() << endl;
    cout << r2.name << "\t"<< "Sum: " << r2.getsum() << "\t"<<"Avg: " << r2.getaverage()<< endl;
    cout << r3.name << "\t"<<"Sum: " << r3.getsum() << "\t"<<"Avg: " << r3.getaverage() << endl;
    cout << r4.name << "\t"<<"Sum: " << r4.getsum() << "\t"<<"Avg: " << r4.getaverage() << endl;
    cout << r5.name << "\t"<<"Sum: " << r5.getsum() << "\t"<<"Avg: " << r5.getaverage() << endl;

   //total average (featurewise)
    double avgAge = (r1.age + r2.age + r3.age + r4.age + r5.age) / 5;
    double avgIncome = (r1.income+ r2.income+ r3.income+ r4.income+r5.income) / 5;
    double avgScore = (r1.score + r2.score + r3.score +r4.score + r5.score) / 5;

    cout << "\ncolumn-wise Averages ---" << endl;
    cout << "Average Age: " << avgAge << endl;
    cout << "Average Income: " << avgIncome << endl;
    cout << "Average Score: " << avgScore << endl;

    return 0;
}

# CONCLUSION

Through these practical exercises, I have successfully implemented the core pillars of Object-Oriented Programming, specifically Classes and Objects. By developing the Student, Course, and DataRecord classes, I demonstrated how to encapsulate diverse data types and their associated behaviors into single, reusable units. I effectively used Access Specifiers to ensure data security through private members and facilitated interaction using public member functions. The implementation of multiple objects allowed for structured data storage, while the use of logic within the main function showcased how to compare and analyze object-specific data. Overall, this practical highlights how OOPS provides a modular approach to problem-solving, making code more organized, scalable, and easier to maintain.


