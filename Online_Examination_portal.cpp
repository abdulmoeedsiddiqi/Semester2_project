#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

// Base class for MCQ subjects
class Subject
{
public:
    virtual void solveMCQs(int &totalCorrectAnswers) = 0; // Pure virtual function to solve MCQs
    virtual ~Subject() {}                                 // Virtual destructor for polymorphic behavior
};

// Derived class for Physics
class Physics : public Subject
{
public:
    void solveMCQs(int &totalCorrectAnswers) override
    {
        cout << "Physics MCQs:" << endl;
        totalCorrectAnswers += askMCQ("What is the SI unit of force?", "A. Newton", "B. Pascal", "C. Joule", "D. Watt", 'A');
        totalCorrectAnswers += askMCQ("What is the SI unit of force?", "A. Newton", "B. Joule", "C. Watt", "D. Pascal", 'A');
        totalCorrectAnswers += askMCQ("What is the acceleration due to gravity on Earth?", "A. 9.8 m/s^2", "B. 6.8 m/s^2", "C. 10.2 m/s^2", "D. 8.6 m/s^2", 'A');
        totalCorrectAnswers += askMCQ("What is the formula for calculating velocity?", "A. v = a/t", "B. v = d/t", "C. v = F/m", "D. v = mgh", 'B');
        totalCorrectAnswers += askMCQ("What is the unit of electric charge?", "A. Ampere", "B. Volt", "C. Ohm", "D. Coulomb", 'D');
        totalCorrectAnswers += askMCQ("What is the SI unit of energy?", "A. Newton", "B. Joule", "C. Watt", "D. Pascal", 'B');
        totalCorrectAnswers += askMCQ("Which of the following is a vector quantity?", "A. Speed", "B. Mass", "C. Distance", "D. Velocity", 'D');
        totalCorrectAnswers += askMCQ("What is the first law of motion called?", "A. Law of Inertia", "B. Law of Acceleration", "C. Law of Action-Reaction", "D. Law of Gravity", 'A');
        totalCorrectAnswers += askMCQ("What is the formula for calculating work done?", "A. W = Fd", "B. W = F/a", "C. W = mgh", "D. W = Pt", 'A');
        totalCorrectAnswers += askMCQ("What is the principle of conservation of energy?", "A. Energy can neither be created nor destroyed", "B. Energy is directly proportional to mass", "C. Energy is inversely proportional to velocity", "D. Energy can only be transferred in the form of heat", 'A');
    }

private:
    int askMCQ(const string &question, const string &optionA, const string &optionB, const string &optionC, const string &optionD, char correctAnswer)
    {
        cout << question << endl;
        cout << optionA << endl
             << optionB << endl
             << optionC << endl
             << optionD << endl;

        char answer;
        cout << "Your answer: ";
        cin >> answer;

        if (toupper(answer) == correctAnswer)
        {
            // cout << "Correct!\n";
            return 1;
        }
        else
        {
            // cout << "Incorrect.\n";
            return 0;
        }
    }
};

// Derived class for Chemistry
class Chemistry : public Subject
{
public:
    void solveMCQs(int &totalCorrectAnswers) override
    {
        cout << "Chemistry MCQs:" << endl;
        totalCorrectAnswers += askMCQ("What is the atomic number of carbon?", "A. 5", "B. 6", "C. 7", "D. 8", 'B');
        totalCorrectAnswers += askMCQ("What is the chemical symbol for gold?", "A. Ag", "B. Au", "C. Cu", "D. Pt", 'B');
        totalCorrectAnswers += askMCQ("What is the pH value of pure water at room temperature?", "A. 5", "B. 6", "C. 7", "D. 8", 'C');
        totalCorrectAnswers += askMCQ("What is the chemical formula for water?", "A. H2O2", "B. H3O", "C. H2O", "D. HO", 'C');
        totalCorrectAnswers += askMCQ("What is the chemical formula for sodium chloride?", "A. NaCl2", "B. NaCl", "C. Na2Cl", "D. Na2Cl2", 'B');
        totalCorrectAnswers += askMCQ("What is the name of the process where a liquid turns into a gas?", "A. Condensation", "B. Sublimation", "C. Evaporation", "D. Deposition", 'C');
        totalCorrectAnswers += askMCQ("Which element is the most abundant in Earth's atmosphere?", "A. Nitrogen", "B. Oxygen", "C. Carbon", "D. Hydrogen", 'A');
        totalCorrectAnswers += askMCQ("What is the chemical symbol for iron?", "A. Ir", "B. Fe", "C. F", "D. In", 'B');
        totalCorrectAnswers += askMCQ("What is the formula for sulfuric acid?", "A. H2SO4", "B. HCl", "C. HNO3", "D. H3PO4", 'A');
        totalCorrectAnswers += askMCQ("What is the process called when a substance goes directly from a solid to a gas?", "A. Melting", "B. Freezing", "C. Sublimation", "D. Condensation", 'C');
    }

private:
    int askMCQ(const string &question, const string &optionA, const string &optionB, const string &optionC, const string &optionD, char correctAnswer)
    {
        cout << question << endl;
        cout << optionA << endl
             << optionB << endl
             << optionC << endl
             << optionD << endl;

        char answer;
        cout << "Your answer: ";
        cin >> answer;

        if (toupper(answer) == correctAnswer)
        {
            // cout << "Correct!\n";
            return 1;
        }
        else
        {
            // incorrect
            return 0;
        }
    }
};
// Derived class for Mathematics
class Mathematics : public Subject
{
public:
    void solveMCQs(int &totalCorrectAnswers) override
    {
        cout << "Mathematics MCQs:" << endl;
        totalCorrectAnswers += askMCQ("What is the value of pi (π)?", "A. 3.14", "B. 3.1415", "C. 3.14159", "D. 3.14159265", 'C');
        totalCorrectAnswers += askMCQ("What is the square root of 81?", "A. 7", "B. 8", "C. 9", "D. 10", 'C');
        totalCorrectAnswers += askMCQ("What is the value of 5 squared?", "A. 20", "B. 25", "C. 30", "D. 35", 'B');
        totalCorrectAnswers += askMCQ("What is the value of 12 divided by 4?", "A. 2", "B. 3", "C. 4", "D. 5", 'C');
        totalCorrectAnswers += askMCQ("What is the sum of 3 and 7?", "A. 9", "B. 10", "C. 11", "D. 12", 'C');
        totalCorrectAnswers += askMCQ("What is the value of 2 to the power of 4?", "A. 6", "B. 8", "C. 10", "D. 12", 'B');
        totalCorrectAnswers += askMCQ("What is the value of 4 multiplied by 6?", "A. 20", "B. 24", "C. 26", "D. 28", 'B');
        totalCorrectAnswers += askMCQ("What is the value of 15 minus 8?", "A. 5", "B. 6", "C. 7", "D. 8", 'C');
        totalCorrectAnswers += askMCQ("What is the value of 9 plus 3 minus 2?", "A. 8", "B. 9", "C. 10", "D. 11", 'D');
        totalCorrectAnswers += askMCQ("What is the value of 18 divided by 3?", "A. 4", "B. 5", "C. 6", "D. 7", 'C');
    }

private:
    int askMCQ(const string &question, const string &optionA, const string &optionB, const string &optionC, const string &optionD, char correctAnswer)
    {
        cout << question << endl;
        cout << optionA << endl
             << optionB << endl
             << optionC << endl
             << optionD << endl;

        char answer;
        // correct
        cin >> answer;

        if (toupper(answer) == correctAnswer)
        {
            // cout << "Correct!\n";
            return 1;
        }
        else
        {
            // incorrect
            return 0;
        }
    }
};

// Derived class for Statistics
class Statistics : public Subject
{
public:
    void solveMCQs(int &totalCorrectAnswers) override
    {
        cout << "Statistics MCQs:" << endl;
        totalCorrectAnswers += askMCQ("What is the median of the following data set: 5, 7, 9, 10, 11?", "A. 9", "B. 10", "C. 7", "D. 11", 'A');
        totalCorrectAnswers += askMCQ("What is the mode of the following data set: 3, 4, 5, 5, 6, 7, 7?", "A. 4", "B. 5", "C. 6", "D. 7", 'B');
        totalCorrectAnswers += askMCQ("What is the mode of the following data set: 5, 7, 9, 9, 10?", "A. 5", "B. 7", "C. 9", "D. 10", 'C');
        totalCorrectAnswers += askMCQ("What is the median of the following data set: 4, 5, 6, 7, 8?", "A. 5", "B. 6", "C. 7", "D. 8", 'C');
        totalCorrectAnswers += askMCQ("What is the range of the following data set: 3, 5, 7, 9, 11?", "A. 2", "B. 4", "C. 6", "D. 8", 'D');
        totalCorrectAnswers += askMCQ("What is the mean of the following data set: 2, 4, 6, 8, 10?", "A. 4", "B. 6", "C. 8", "D. 10", 'C');
        totalCorrectAnswers += askMCQ("What is the standard deviation of the following data set: 10, 15, 20, 25, 30?", "A. 5", "B. 8", "C. 10", "D. 12", 'B');
        totalCorrectAnswers += askMCQ("What is the interquartile range of the following data set: 15, 20, 25, 30, 35?", "A. 10", "B. 15", "C. 20", "D. 25", 'B');
        totalCorrectAnswers += askMCQ("What is the probability of getting heads when flipping a fair coin?", "A. 1/2", "B. 1/4", "C. 1/6", "D. 1/8", 'A');
        totalCorrectAnswers += askMCQ("What is the mode of the following data set: 7, 8, 9, 9, 10, 10, 10, 11?", "A. 8", "B. 9", "C. 10", "D. 11", 'C');
    }

private:
    int askMCQ(const string &question, const string &optionA, const string &optionB, const string &optionC, const string &optionD, char correctAnswer)
    {
        cout << question << endl;
        cout << optionA << endl
             << optionB << endl
             << optionC << endl
             << optionD << endl;

        char answer;
        cout << "Your answer: ";
        cin >> answer;

        if (toupper(answer) == correctAnswer)
        {
            // correct
            return 1;
        }
        else
        {
            // incorrect
            return 0;
        }
    }
};

// Derived class for Computer Science
class ComputerScience : public Subject
{
public:
    void solveMCQs(int &totalCorrectAnswers) override
    {
        cout << "Computer Science MCQs:" << endl;
        totalCorrectAnswers += askMCQ("What is the full form of CPU?", "A. Central Process Unit", "B. Central Processing Unit", "C. Computer Process Unit", "D. Control Process Unit", 'B');
        totalCorrectAnswers += askMCQ("What is the binary representation of 5?", "A. 101", "B. 110", "C. 111", "D. 100", 'A');
        totalCorrectAnswers += askMCQ("Which of the following is not a programming language?", "A. Java", "B. Python", "C. HTML", "D. C++", 'C');
        totalCorrectAnswers += askMCQ("What does HTML stand for?", "A. Hyper Text Markup Language", "B. High Technical Markup Language", "C. Home Tool Markup Language", "D. Hyperlinks and Text Markup Language", 'A');
        totalCorrectAnswers += askMCQ("What is the output of the following C++ code?\n\n#include <iostream>\nusing namespace std;\n\nint main() {\n    int x = 5;\n    cout << x++ << endl;\n    return 0;\n}\n", "A. 5", "B. 6", "C. 4", "D. Compiler error", 'A');
        totalCorrectAnswers += askMCQ("Which data structure uses LIFO (Last In, First Out) approach?", "A. Queue", "B. Stack", "C. Linked List", "D. Array", 'B');
        totalCorrectAnswers += askMCQ("Which sorting algorithm has the worst-case time complexity of O(n^2)?", "A. Merge Sort", "B. Quick Sort", "C. Bubble Sort", "D. Insertion Sort", 'C');
        totalCorrectAnswers += askMCQ("What does CSS stand for?", "A. Creative Style Sheets", "B. Computer Style Sheets", "C. Cascading Style Sheets", "D. Colorful Style Sheets", 'C');
        totalCorrectAnswers += askMCQ("Which programming language is used for developing Android apps?", "A. Java", "B. Python", "C. C++", "D. JavaScript", 'A');
        totalCorrectAnswers += askMCQ("What is the output of the following Python code?\n\nx = 5\ny = 2\nprint(x / y)", "A. 2.5", "B. 2", "C. 2.0", "D. 2.25", 'A');
    }

private:
    int askMCQ(const string &question, const string &optionA, const string &optionB, const string &optionC, const string &optionD, char correctAnswer)
    {
        cout << question << endl;
        cout << optionA << endl
             << optionB << endl
             << optionC << endl
             << optionD << endl;

        char answer;
        cout << "Your answer: ";
        cin >> answer;

        if (toupper(answer) == correctAnswer)
        {
            cout << "Correct!\n";
            return 1;
        }
        else
        {
            cout << "Incorrect.\n";
            return 0;
        }
    }
};

// Class to manage test instructions
class Instructions
{
public:
    void generalInstructions()
    {
        cout << "General Instructions:\n";
        cout << "Please read the following instructions carefully.\n";
        cout << "Strict disciplinary action such as cancellation of the test may be taken if instructions are not followed.\n";
        cout << "Duration of the paper is 60 Minutes (One Hour).\n";
        cout << "Do not misbehave with the supervisory staff.\n";
        cout << "You MUST not carry any type of helping material (Printed/Soft) in the Examination Hall.\n";
        cout << "You MUST avoid disturbing the peace in and around the Examination Hall.\n";
        cout << "In case of cheating/copying found during evaluation, the entire paper will be marked ZERO.\n";
    }

    void violationOfInstructions()
    {
        cout << "Warnings: \n";
        cout << "To avoid any kind of Data Loss or other problem, please take care of the followings:\n";
        cout << "Do not close the browser window.\n";
        cout << "Do not press browser back button, instead use the exam software navigation buttons.\n";
        cout << "Do not leave the exam software idle for more than 15 minutes else your paper shall be locked, and you won't be able to resume your paper.\n";
        cout << "Do not paste the screen shots in answer area in any case.\n";
        cout << "Do not FINISH the exam until unless you are sure that you have done the maximum according to your knowledge.\n";
    }
};

// Class to manage test
class Test
{
private:
    int totalCorrectMCQs = 0; // Total number of correct MCQs in all subjects

public:
    void solveSubjects(int field)
    {
        int Software_Engineering = 85;

        int totalCorrectPhysics = 0, totalCorrectChemistry = 0, totalCorrectMathematics = 0, totalCorrectStatistics = 0, totalCorrectComputerScience = 0;

        Physics physics;
        Chemistry chemistry;
        Mathematics mathematics;
        Statistics statistics;
        ComputerScience computerScience;

        switch (field)
        {
        case 1: // Pre-Engineering
            physics.solveMCQs(totalCorrectPhysics);
            chemistry.solveMCQs(totalCorrectChemistry);
            mathematics.solveMCQs(totalCorrectMathematics);
            break;
        case 2: // ICS
            physics.solveMCQs(totalCorrectPhysics);
            mathematics.solveMCQs(totalCorrectMathematics);
            computerScience.solveMCQs(totalCorrectComputerScience);
            break;
        case 3: // ICS with Statistics
            physics.solveMCQs(totalCorrectPhysics);
            mathematics.solveMCQs(totalCorrectMathematics);
            statistics.solveMCQs(totalCorrectStatistics);
            break;
        default:
            cout << "Invalid choice. Exiting...\n";
            return;
        }

        totalCorrectMCQs = totalCorrectPhysics + totalCorrectChemistry + totalCorrectMathematics + totalCorrectStatistics + totalCorrectComputerScience;
        cout << "\nYou have attempted all subjects." << endl;
        // // Display total correct MCQs for each subject
        // cout << "\nTotal Correct MCQs:" << endl;
        // cout << "Physics: " << totalCorrectPhysics << endl;
        // cout << "Chemistry: " << totalCorrectChemistry << endl;
        // cout << "Mathematics: " << totalCorrectMathematics << endl;
        // if (field == 3)
        //     cout << "Statistics: " << totalCorrectStatistics << endl;
        // cout << "Computer Science: " << totalCorrectComputerScience << endl;

        // Display total correct MCQs in all subjects
        // cout << "\nTotal Correct MCQs in all Subjects: " << totalCorrectMCQs << endl;

        if (totalCorrectMCQs > 15)
        {
            int fsc_marks, Matric_marks;
            int Merit;

            cout << "Congratulations you have passed the test" << endl;
            cout << "Note:Please enter the correct marks  for Merit Calcultion, otherwise your admission will be cancelled at any stage" << endl;

            cout << "Now Enter your Fsc Marks" << endl;
            cin >> fsc_marks;

            cout << "Now Enter your Matric Percentage" << endl;
            cin >> Matric_marks;

            Merit = (totalCorrectMCQs * 0.5) + ((fsc_marks / 11) * 0.30) + ((Matric_marks / 11) * 0.20);
            cout << "Your Merit is " << Merit << " %" << endl;

            cout << "Now please login to yout admission portal for Preference selection,It will be updated soon" << endl;
            cout << "Available faculties based on your merit:" << endl;
            if (Merit >= 90)
                cout << "1. Computer Science" << endl;
            if (Merit >= 80)
                cout << "2. Software Engineering" << endl;
            if (Merit >= 75)
                cout << "3. AI (Artificial Intelligence)" << endl;
            if (Merit >= 65)
                cout << "4. Cyber Security" << endl;
            if (Merit >= 60)
                cout << "5. Data Science" << endl;
            if (Merit >= 55)
                cout << "6. Computer Engineering" << endl;
            if (Merit >= 50)
                cout << "7. Electrical Engineering" << endl;
            if (Merit >= 45)
                cout << "8. Civil Engineering" << endl;
            if (Merit >= 40)
                cout << "9. Mechanical Engineering" << endl;
            else
            {
                cout << "Sorry, you do not meet the minimum requirement for merit." << endl;
            }
        }
        else
        {
            cout << "Sorry,better luck next time";
        }
    }
};

// Function to check if username exists in the file
bool isUsernameRegistered(const string &username)
{

    ifstream file("usernames.txt");
    string line;
    while (getline(file, line))
    {
        if (line == username)
        {
            return true;
        }
    }
    return false;
}

// Function to retrieve password for a given username
bool getPasswordForUsername(string &username)
{
    ifstream file("passwords.txt");
    string line;
    // while (getline(file, line)) {
    //     if (line == username) {
    //         // Read the next line which should be the password
    //         if (getline(file, line)) {
    //             return line;
    //         }
    //     }
    // }
    // return ""; // Return an empty string if username not found or password retrieval failed
    while (getline(file, line))
    {
        if (line == username)
        {
            return true;
        }
    }
    return false;
}

// Function to handle login
void login()
{
    string username, password;
    cout << "Enter your username: ";
    cin >> username;

    // Check if the username is registered
    if (isUsernameRegistered(username))
    {
        bool loggedIn = false;
        int attempts = 2; // Number of attempts allowed
        while (attempts >= 0)
        {
            cout << "Enter your password: ";
            cin >> password;
            // string storedPassword = getPasswordForUsername(username);
            if (getPasswordForUsername(password))
            {
                cout << "Login Successful! You may proceed to test." << endl;
                loggedIn = true;
                break;
            }
            else
            {
                cout << "Incorrect password. " << attempts << " attempts left." << endl;
                attempts--;
            }
        }
        if (!loggedIn)
        {
            cout << "Access Denied. You have exceeded the number of attempts." << endl;
            exit(0);
        }
    }
    else
    {
        cout << "You are not registered. Access Denied." << endl;
        exit(0);
    }
}
int main()
{
    cout << " ______________________________________________________________________" << endl;
    cout << "|____________________[ WELCOME TO OUR TEST PORTAL ]____________________|" << endl;
    cout << "|----------------------------------------------------------------------|" << endl;
    cout << " Please login to continue " << endl;

    // Test the login function
    login();

    Instructions instructions;
    instructions.generalInstructions();
    cin.ignore(); // Ignore any previous newlines in the buffer
    cin.get();
    instructions.violationOfInstructions();
    cout << endl;
    Test test;

    int field;
    cout << "Enter your Field\n1.Pre-Engineering\n2.ICS\n3.ICS with Statistics" << endl;
    cin >> field;

    test.solveSubjects(field);

    return 0;
}
