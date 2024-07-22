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

1.Subject Class:

Base class for all subjects.

Contains a pure virtual function solveMCQs.

2.Derived Classes (Physics, Chemistry, Mathematics, Statistics, ComputerScience)

Each derived class implements the solveMCQs method specific to its subject.

The askMCQ method is used to ask questions and check answers.

3.Instructions Class

Displays general test instructions and warnings.

4.Test Class

Manages the test process, including solving MCQs for selected subjects and calculating merit.

5.isUsernameRegistered Function

Checks if a given username exists in the file usernames.txt.

6.getPasswordForUsername Function

Retrieves the password for a given username from the file passwords.txt.

7.login Function

Handles user login by prompting for username and password.

