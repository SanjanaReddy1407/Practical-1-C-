# Practicals__OOPs__C++

# AIM - 1
## Program to implement concept of class and object.

# Theory
1. Class: A Class is a user-defined data type that acts as a blueprint for creating objects. It encapsulates data (attributes) and methods (functions) into a single unit. In C++, classes are the core of Object-Oriented Programming (OOP).

2. Object: An Object is an instance of a class. When a class is defined, no memory is allocated; memory is only allocated when an object of that class is created.

3. Access Specifiers:

- Public: Members are accessible from outside the class.

- Private: Members can only be accessed by functions within the class. This is used for Data Hiding, a key part of encapsulation.

4. Member Functions: These are functions defined inside or outside the class that operate on the data members of the objects.

# Problem Statement 1_a
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


# Problem Statement 1_b
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




# Problem Statement 1_c
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



# CONCLUSION

Through these practical exercises, I have successfully implemented the core pillars of Object-Oriented Programming, specifically Classes and Objects. By developing the Student, Course, and DataRecord classes, I demonstrated how to encapsulate diverse data types and their associated behaviors into single, reusable units. I effectively used Access Specifiers to ensure data security through private members and facilitated interaction using public member functions. The implementation of multiple objects allowed for structured data storage, while the use of logic within the main function showcased how to compare and analyze object-specific data. Overall, this practical highlights how OOPS provides a modular approach to problem-solving, making code more organized, scalable, and easier to maintain.


