// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

// #define DEBUG

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    float gpa = 0.0f;
    int credits_sum = 0;

    for (int i = 0; i < grades.size(); i++){
        if(grades[i].get_student_id() == id){
            // first, get the points according to the grade
            char grades_local = grades[i].get_grade();
            float points = 0.0f;
            switch (grades_local){
                case 'A':
                    points = 4;
                    break;
                case 'B':
                    points = 3;
                    break;
                case 'C':
                    points = 2;
                    break;
                case 'D':
                    points += 1;
                    break;
            }
            // second, get the credits according to the course
            char course_local = grades[i].get_course_id();
            float credits_local = 0.0f;
            for (int j = 0; j < courses.size(); j++){
                if (course_local == courses[j].get_id()){
                    credits_local = courses[j].get_credits();
                }
            }
            // third, multiply points per credits and add to gpa
            gpa += points*credits_local;
            credits_sum += credits_local;
        }
    }

#ifdef DEBUG
    std::cout << "The GPA sum is " << gpa << std::endl;
    std::cout << "The credits sum is " << credits_sum << std::endl;
#endif

    gpa /= credits_sum;

    std::string student_str;
    //student_str = students[0].get_name(); // Change this to the selected student's name
    

    /* ALTERNATIVE 1: for and loop
    for (int i = 0; i < students.size(); i++){
        if (id == students[i].get_id()){
            student_str = students[i].get_name();
        }
    }
    */


    // ALTERNATIVE 2: only while traverse the students vector until I find the requested id
    int i = 0;
    while (i < students.size() && students[i].get_id() != id){
        i++;
    }
    student_str = students[i].get_name();

    std::cout << "The GPA for " << student_str << " is " << gpa << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
