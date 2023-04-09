# Student-report-card-system-Cpp
This is a C++ program that simulates a simple University Information System. The program is designed to manage information about students, professors, and student grades. Users can view and update the information through a text-based interface.

# Features

* Manage information about students, professors, and student grades.
* View the full report or specific parts (year of students, subject professors, grades of students).
* Update the information for students, professors, and student grades.
Classes

# Classes
* Person: The base class for students and professors, with common attributes like ID, first name, last name, and age.
* Student: Inherits from Person, with additional attributes like the year of the program.
* Professor: Inherits from Person, with additional attributes like the subject they teach.
* Studentgrades: Inherits from Person, with additional attributes like the grade of the student.

# How to Compile and Run
To compile and run the program, follow these steps:

* Save the provided code in a file named Student_report_card_system.cpp.
* Open a terminal and navigate to the directory where the file is saved.
* Run the following command to compile the code: g++ -o Student_report_card_system Student_report_card_system.cpp
* Run the following command to execute the compiled program: ./Student_report_card_system

# Usage
The program will present a menu with options to view or update the information. Follow the on-screen prompts to navigate through the different sections and manage the data.

Note: The program uses a text-based interface, so ensure that you provide the input in the correct format when updating the information.
