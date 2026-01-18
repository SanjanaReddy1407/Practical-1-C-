# Practical-1-C++

# AIM
## Program to implement concept of class and object.

# Theory: Classes and Objects in C++
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
- 
- Call output() for each object to display the results.

step6: Stop.

# CODE
{

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



