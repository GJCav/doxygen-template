/**
 * @file class.cpp
 * @author GJCav
 * @brief the implementation of the Student and Class classes
 * @version 0.1
 * @date 2023-07-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "class.h"

/**
 * @brief Construct a new Student:: Student object
 * 
 * This comment is make in class.cpp. Doxygen can still find it.
 * 
 * @param name 
 * @param address 
 */
Student::Student(int name, int address) {
    this->name = name;
    this->address = address;
    this->cls = nullptr;
}