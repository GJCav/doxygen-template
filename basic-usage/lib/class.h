/**
 * @file class.h
 * @author GJCav
 * @brief contains the declaration of the Student and Class classes
 * @version 0.1
 * @date 2023-07-08
 * 
 * @copyright Copyright (c) 2023
 * 
 * Class and Student are two classes that are used to demonstrate the
 * basic usage of Doxygen. We use JavaDoc-style comments to document
 * the classes and their members.
 *
 * When commenting, you can comment in the class.h files or in the class.cpp 
 * files. But DO NOT comment a target in both files. A target may be a class,
 * a function, a variable, etc. Commenting the same target in both files will 
 * trap Doxygen in undefined behavior.
 * 
 * @see Student
 * @see Class
 */

#pragma once
#ifndef __FOO_H__
#define __FOO_H__

#include <vector>

class Student;
class Class;

/**
 * @brief Student class
 * 
 * A student should have a name, an address, and a class. The class
 * should be a pointer to a Class object. Instance of Student should
 * use the @link Student::cls @endlink pointer to access the Class object and NEVER delete it.

 * @see Class
 */
class Student {
private:
    int name;
    int address;
    Class *cls; /**< pointer to student's class, maybe null */

public:
    void Student(int name, int address);
    void setClass(Class *cls);

    /**
     * @brief print the information about the student.
     */
    void print();
};

/**
 * @brief Class class
 * 
 * A class should have a name, a grade, and a list of students. The
 * list of students should be a vector of Student objects.
 * 
 * @see Student
 */
class Class {
private:
    int name;
    int grade;
    std::vector<Student> students;

public:
    void Class(int name, int grade);
    void addStudent(Student student);

    /**
     * @brief calculate the average score of all students in the class.
     * 
     * @param[out] sum 
     * @param[out] cnt 
     */
    void avg_score(int &sum, int &cnt);
}

/**
 * @brief bar-space
 * 
 * no description.
 */
namespace bar-space {
    class Bar {
    public:
        void Bar();
    }
}

#endif