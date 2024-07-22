#README

Overview

This program is a Multiple Choice Questions (MCQ) solver designed for students in different fields of study.

It includes subjects such as Physics, Chemistry, Mathematics, Statistics, and Computer Science. 

The program also provides general instructions for taking the test and calculates the merit based on the user's performance.


Features

MCQ Solver: The program includes a base class Subject and derived classes for different subjects. Each derived class implements the method to solve MCQs.

Instructions: Displays general instructions and warnings for taking the test.

Merit Calculation: Calculates the merit based on the user's performance in the MCQs and their academic marks.

User Authentication: Checks if the username is registered and retrieves the password for login.

Classes and Methods

Subject Class

Base class for all subjects.

Contains a pure virtual function solveMCQs.

Derived Classes (Physics, Chemistry, Mathematics, Statistics, ComputerScience)

Each derived class implements the solveMCQs method specific to its subject.

The askMCQ method is used to ask questions and check answers.

Instructions Class

Displays general test instructions and warnings.

Test Class

Manages the test process, including solving MCQs for selected subjects and calculating merit.

isUsernameRegistered Function

Checks if a given username exists in the file usernames.txt.

getPasswordForUsername Function

Retrieves the password for a given username from the file passwords.txt.

login Function

Handles user login by prompting for username and password.

